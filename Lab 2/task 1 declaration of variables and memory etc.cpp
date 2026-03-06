// Name: Asad Ullah
// Roll No: 5121220 / BF25NWELE0686

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // Use standard namespace instead of writing std:: for each cin and cout

int main() {                    // starting point of the main function
    int age = 20;              // declare integer variable and assign value 20 to it
    double price = 19.99;      // declare double variable and assign value 19.99
    char grade = 'A';          // declare character variable and assign value 'A'
    bool isPassed = true;      // declare boolean variable and assign value true
    string text = "C++";       // declare string variable and assign value "C++"

    cout << "Size of int: " << sizeof(age) << " bytes" << endl;       // Print size of int
    cout << "Size of double: " << sizeof(price) << " bytes" << endl;  // Print size of double
    cout << "Size of char: " << sizeof(grade) << " bytes" << endl;    // Print size of char
    cout << "Size of bool: " << sizeof(isPassed) << " bytes" << endl; // Print size of bool
    cout << "Size of string: " << sizeof(text) << " bytes" << endl;   // Print size of string

    cout << "Value of int: " << age << endl;       // Print value of int
    cout << "Value of double: " << price << endl;  // Print value of double
    cout << "Value of char: " << grade << endl;    // Print value of char
    cout << "Value of bool: " << isPassed << endl; // Print value of bool 
    cout << "Value of string: " << text << endl;   // Print value of string

    return 0;  // tells the computer that program has ended successfully
}
