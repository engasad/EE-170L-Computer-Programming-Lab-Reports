#include <iostream>       
using namespace std;      
struct Student             // structure declaration 
{ 
    string name;          // student name 
    int age;                  // student age 
    char grade;          // student grade 
}; 
int main() 
{ 
    Student student1;       // structure variable 
    student1.name = "Ali";     // assigning name 
    student1.age = 19;         // assigning age 
    student1.grade = 'A';      // assigning grade 
    cout << "Name: " << student1.name << endl;     // display name 
    cout << "Age: " << student1.age << endl;           // display age 
    cout << "Grade: " << student1.grade << endl;   // display grade 
    return 0;}
