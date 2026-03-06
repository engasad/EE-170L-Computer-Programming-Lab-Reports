/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>  // tells the compiler to include input output stream library
using namespace std;  // use standard namespace without having the need to type std:: for  every cin and cout
int main() {            // main function starting point
    char grade;  // variable to store grade

    cout << "Enter grade (A, B, C, D, F): ";  // ask user for input
    cin >> grade;  // read user input

    // switch statement to check grade
    switch(grade) {
        case 'A': cout << "Excellent"; break;   // if grade = A
        case 'B': cout << "Very Good"; break;   // if grade = B
        case 'C': cout << "Good"; break;        // if grade = C
        case 'D': cout << "Pass"; break;        // if grade = D
        case 'F': cout << "Fail"; break;        // if grade = F
        default: cout << "Invalid Grade";       // if input is not A-F
    }

    return 0;  //tells the computer that program has ended successfully
}
