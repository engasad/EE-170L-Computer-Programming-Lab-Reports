/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // use standard namespace without having the need to type std:: for  every cin and cout

int main() {             // main function starting point

    int choice;   // variable declaration  to store user choice
    double value; // variable declaration to store input value

    // display the menu to the user to select one
    cout << "Menu:\n";
    cout << "1 -> Convert Kilometers to Meters\n";
    cout << "2 -> Convert Meters to Centimeters\n";
    cout << "3 -> Convert Kilograms to Grams\n";
    cout << "4 -> Convert Celsius to Fahrenheit\n";

    cout << "Enter your choice: ";  // ask user for choice
    cin >> choice;  // takes users choice and stores it in variable

    cout << "Enter value: ";  // ask user for value
    cin >> value;  // takes the value from user and stores it in vriable

    // switch statement to perform conversion
    switch(choice) {
       { case 1: cout << "Result = " << value * 1000 << " meters";     // km to m
        case 2: cout << "Result = " << value * 100 << " centimeters"; break;   // m to cm
        case 3: cout << "Result = " << value * 1000 << " grams"; break;        // kg to g
        case 4: cout << "Result = " << (value * 9/5) + 32 << " Fahrenheit"; break;} // C to F
        default: cout << "Invalid choice!";  // if choice is not 1-4
}

    return 0;  //tells the computer that program has ended successfully
}
