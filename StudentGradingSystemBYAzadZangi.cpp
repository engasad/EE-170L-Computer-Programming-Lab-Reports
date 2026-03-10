#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm> // for sort
using namespace std;
// Function to color grades for terminal output
string coloredGrade(string grade) {
    if (grade == "A" || grade == "A-") return "\033[32m" + grade + "\033[0m"; // green
    if (grade == "B+" || grade == "B") return "\033[34m" + grade + "\033[0m"; // blue
    if (grade == "B-" || grade == "C+" || grade == "C") return "\033[33m" + grade + "\033[0m"; // yellow
    return "\033[31m" + grade + "\033[0m"; // F and D grades in red
}
const int SUBJECTS = 9;

struct Student {
    string name; 
    float marks[SUBJECTS];
    string grades[SUBJECTS];
    float cgpa;
    int rank;
    
    string errors[SUBJECTS];
};

vector<Student> students;

// Subjects and credit hours
string subjectNames[SUBJECTS] = {
    "EM", "Calculus", "CompFund", "Ideology",
    "Islamiyat", "Fahmi Quran", "EM Lab", "Comp Lab", "Prof Ethics"
};
int creditHours[SUBJECTS] = {3, 3, 2, 2, 1, 1, 1, 1, 2};

// Relative grading
string getGrade(float score, float mean, float stddev) {
    if (score >= mean + 1.5 * stddev) return "A";
    else if (score >= mean + 1.2 * stddev) return "A-";
    else if (score >= mean + 0.9 * stddev) return "B+";
    else if (score >= mean + 0.5 * stddev) return "B";
    else if (score >= mean + 0.2 * stddev) return "B-";
    else if (score >= mean - 0.2 * stddev) return "C+";
    else if (score >= mean - 0.5 * stddev) return "C";
    else if (score >= mean - 0.8 * stddev) return "C-";
    else if (score >= mean - 1.1 * stddev) return "D+";
    else if (score >= mean - 1.3 * stddev) return "D";
    else if (score >= mean - 1.5 * stddev) return "D-";
    else return "F";
}

// Grade -> GPA
float gradeToPoint(string g) {
    if (g == "A") return 4.0;
    else if (g == "A-") return 3.67;
    else if (g == "B+") return 3.33;
    else if (g == "B") return 3.00;
    else if (g == "B-") return 2.67;
    else if (g == "C+") return 2.33;
    else if (g == "C") return 2.00;
    else if (g == "C-") return 1.67;
    else if (g == "D+") return 1.33;
    else if (g == "D") return 1.00;
    else if (g == "D-") return 0.67;
    else return 0.0;
}

// Load student data from CSV
void loadFromCSV(const string &filename) {
    ifstream file(filename.c_str());
    if (!file.is_open()) {
        cout << "Error: Could not open file: " << filename << endl;
        return;
    }

    string line;
    bool firstLine = true;
    while (getline(file, line)) {
        if (line.empty()) continue;

        if (firstLine) { firstLine = false; continue; }

        Student stu;
        stringstream ss(line);
        string value;

        getline(ss, stu.name, ','); // Student name

        for (int j = 0; j < SUBJECTS; j++) {
            float mid = 0, final = 0, sessional = 0;

            // THEORY subjects: 0-5 + 8 (Prof Ethics)
            if ((j >= 0 && j <= 5) || j == 8) {
                // MID
                if (getline(ss, value, ',') && !value.empty())
                    mid = atof(value.c_str());
                else
                    mid = -1;
                if (mid < 0 || mid > 25) mid = -1;

                // FINAL
                if (getline(ss, value, ',') && !value.empty())
                    final = atof(value.c_str());
                else
                    final = -1;
                if (final < 0 || final > 50) final = -1;

                // SESSIONAL
                if (getline(ss, value, ',') && !value.empty())
                    sessional = atof(value.c_str());
                else
                    sessional = -1;
                if (sessional < 0 || sessional > 25) sessional = -1;

                // If any component invalid, mark subject invalid (-1)
                if (mid == -1 || final == -1 || sessional == -1)
                    stu.marks[j] = -1;
                else
                    stu.marks[j] = mid + final + sessional;

            } else {
                // LABS: 6-7
                if (getline(ss, value, ',') && !value.empty()) {
                    stu.marks[j] = atof(value.c_str());
                    if (stu.marks[j] < 0 || stu.marks[j] > 100) stu.marks[j] = -1;
                } else {
                    stu.marks[j] = -1;
                }
            }
        }

        students.push_back(stu);
    }

    file.close();
    cout << "Loaded " << students.size() << " students from CSV.\n";
}
// Manual input
void manualInput() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    students.clear();

    for (int i = 0; i < n; i++) {
        Student stu;
        cout << "\nEnter name of student " << i + 1 << ": ";
        getline(cin, stu.name);

        for (int j = 0; j < SUBJECTS; j++) {
            float totalMarks;
            cout << "Enter total marks (out of 100) for " << subjectNames[j] << ": ";
            cin >> totalMarks;

            if (totalMarks < 0 || totalMarks > 100)
                stu.marks[j] = -1; // invalid -> F
            else
                stu.marks[j] = totalMarks;
        }

        cin.ignore();
        students.push_back(stu);
    }

    cout << "\nManual data entry completed!\n";
}
//new validation
bool isInvalidMarks(float marks)
{
    if (marks < 0 || marks > 100)
        return true;
    return false;
}


// Calculate relative grades and CGPA
// Calculate relative grades and CGPA
void calculateResults() {
    float mean[SUBJECTS], stddev[SUBJECTS];

    // Compute mean and stddev only for valid subjects
    for (int j = 0; j < SUBJECTS; j++) {
        float sum = 0;
        int count = 0;
        for (size_t i = 0; i < students.size(); i++) {
            if (students[i].marks[j] >= 0) { // valid mark
                sum += students[i].marks[j];
                count++;
            }
        }
        mean[j] = (count > 0) ? sum / count : 0;

        float sq_sum = 0;
        for (size_t i = 0; i < students.size(); i++) {
            if (students[i].marks[j] >= 0) {
                sq_sum += pow(students[i].marks[j] - mean[j], 2);
            }
        }
        stddev[j] = (count > 0) ? sqrt(sq_sum / count) : 0;
    }

    // Assign grades and calculate CGPA
    for (size_t i = 0; i < students.size(); i++) {
        float totalPoints = 0;
        int totalCredits = 0;

        for (int j = 0; j < SUBJECTS; j++) {

            // If the mark is negative, or any component exceeded max, assign F
            if (students[i].marks[j] < 0) {
                students[i].grades[j] = "F";
            } else {
                students[i].grades[j] = getGrade(students[i].marks[j], mean[j], stddev[j]);
            }

            totalPoints += gradeToPoint(students[i].grades[j]) * creditHours[j];
            totalCredits += creditHours[j];
        }

        students[i].cgpa = (totalCredits > 0) ? totalPoints / totalCredits : 0.0;
    }

    cout << "\nRelative grading and CGPA calculated!\n";
}
// Assign ranks based on CGPA
bool compareByCGPA(const Student &a, const Student &b) {
    return a.cgpa > b.cgpa;
}

void assignRanks() {
    // Sort students by CGPA in descending order
    sort(students.begin(), students.end(), compareByCGPA);

    // Assign ranks
    int currentRank = 1;
    for (size_t i = 0; i < students.size(); i++) {
        if (i > 0 && students[i].cgpa == students[i - 1].cgpa) {
            // Same CGPA ? same rank
            students[i].rank = students[i - 1].rank;
        } else {
            students[i].rank = currentRank;
        }
        currentRank++;
    }

    cout << "\nRanks assigned successfully!\n";
}
//statics class
void showStatistics() {
    if (students.empty()) {
        cout << "No student data available.\n";
        return;
    }

    float highest = students[0].cgpa;
    float lowest = students[0].cgpa;
    float sum = 0;
    string topper = students[0].name;

    for (size_t i = 0; i < students.size(); i++) {
        sum += students[i].cgpa;

        if (students[i].cgpa > highest) {
            highest = students[i].cgpa;
            topper = students[i].name;
        }

        if (students[i].cgpa < lowest) {
            lowest = students[i].cgpa;
        }
    }

    float average = sum / students.size();

    cout << "\n========== CLASS STATISTICS ==========\n";
    cout << "Topper: " << topper << endl;
    cout << "Highest CGPA: " << fixed << setprecision(2) << highest << endl;
    cout << "Lowest CGPA : " << lowest << endl;
    cout << "Average CGPA: " << average << endl;
    cout << "Total Students: " << students.size() << endl;
    cout << "======================================\n";
}




// Display results
/*void display() {
    cout << "\n\n================== RESULTS ==================\n";
    cout << left << setw(15) << "Name";
    for (int j = 0; j < SUBJECTS; j++)
        cout << setw(15) << subjectNames[j];
    cout << setw(8) << "CGPA" << setw(6) << "Rank" << endl;
    cout << "-------------------------------------------------------------------------------\n";

    for (size_t i = 0; i < students.size(); i++) {
        cout << left << setw(15) << students[i].name;
        for (int j = 0; j < SUBJECTS; j++)
            cout << setw(15) << students[i].grades[j];
        cout << setw(8) << fixed << setprecision(2) << students[i].cgpa
             << setw(6) << students[i].rank;
        cout << endl;
    }
}*/
#include <sstream>  // Make sure this is included

void display() {
    cout << "\n================== RESULTS ==================\n";

    // Header
    cout << left << setw(13) << "Name";
    for (int j = 0; j < SUBJECTS; j++)
        cout << setw(13) << subjectNames[j];  // subject column
    cout << setw(8) << "CGPA" << setw(6) << "Rank" << endl;

    cout << string(13 + SUBJECTS * 13 + 14, '-') << "\n";

    // Rows
    for (size_t i = 0; i < students.size(); i++) {
        cout << left << setw(13) << students[i].name;

        for (int j = 0; j < SUBJECTS; j++) {
            string grade = students[i].grades[j];
            float m = students[i].marks[j]; // actual total marks

            // Show grade + marks with space: "A (95)"
            ostringstream out;
            out << grade << " (" << (int)m << ")";
            cout << setw(13) << out.str(); // uniform column width
        }

        cout << setw(8) << fixed << setprecision(2) << students[i].cgpa
             << setw(6) << students[i].rank << endl;
    }
}

// Save results to CSV (Excel compatible)
void saveToCSV(const string &filename) {
    ofstream file(filename.c_str());

    if (!file.is_open()) {
        cout << "Error opening file for writing: " << filename << endl;
        return;
    }

    // Header row
    file << "Name";

    for (int j = 0; j < SUBJECTS; j++) {
        file << "," << subjectNames[j] << " Marks";
        file << "," << subjectNames[j] << " Grade";
    }

    file << ",CGPA,Rank\n";

    // Student data
    for (size_t i = 0; i < students.size(); i++) {
        file << students[i].name;

        for (int j = 0; j < SUBJECTS; j++) {
            file << "," << students[i].marks[j];
            file << "," << students[i].grades[j];
        }

        file << "," << fixed << setprecision(2) << students[i].cgpa;
        file << "," << students[i].rank << "\n";
    }

    file.close();

    cout << "Detailed results saved to " << filename << endl;
}

// Main menu
int main() {
    char again = 'n';

    do {
        students.clear();

        int inputChoice;
        cout << "Choose input method:\n";
        cout << "1. Load from CSV file\n";
        cout << "2. Enter data manually\n";
        cout << "Enter choice: ";
        cin >> inputChoice;
        cin.ignore();

        string outputFile = "result.csv";

        if (inputChoice == 1) {
            string inputFile;
            ifstream testFile;

            while (true) {
                cout << "Enter full path of the CSV file: ";
                getline(cin, inputFile);

                testFile.open(inputFile.c_str());/*
				ifstream::open() ? built-in C++ function 
				(part of <fstream>).

                c_str() ? converts std::string to C-style string (const char*) for compatibility.

               Together, this line opens a file from a path provided by the user.
				*/
                if (testFile.is_open()) {
                    testFile.close();
                    break;
                } else {
                    cout << "File could not be opened. Try again.\n";
                }
            }

            loadFromCSV(inputFile);
            outputFile = inputFile;

        } else if (inputChoice == 2) {
            manualInput();

            cout << "Enter output CSV file path to save results: ";
            getline(cin, outputFile);
        } else {
            cout << "Invalid choice!\n";
            continue;
        }

        int choice;
        do {
            cout << "\n===== MENU =====\n";
            cout << "1. Calculate Result and Assign Ranks\n";
            cout << "2. Display Result\n";
            cout << "3. Save to CSV\n";
            cout << "4. Show Class Statistics\n";
            cout << "5. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;
            cin.ignore();

            switch(choice) {
                case 1: calculateResults(); assignRanks(); break;
                case 2: display(); break;
                case 3: saveToCSV(outputFile); break;
                case 4: showStatistics(); break;
                case 5: cout << "Exiting menu...\n"; break;
                default: cout << "Invalid choice!\n";
            }
        } while(choice != 5);

        cout << "\nDo you want to process another dataset? (y/n): ";
        cin >> again;
        cin.ignore();

    } while(again == 'y' || again == 'Y');

    cout << "Program terminated.\n";
    return 0;
}
