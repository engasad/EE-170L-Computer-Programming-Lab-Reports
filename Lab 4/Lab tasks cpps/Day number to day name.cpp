/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>  // tells the compiler to include input output stream library
using namespace std; // use standard namespace without having the need to type std:: for  every cin and cout

int main() {      // main function starting point
 
    int day;  // variable to store day number

    cout << "Enter day number (1-7): ";  // ask user for input
    cin >> day;  // read user input

    // switch statement to check day number
    switch(day) {
        case 1: cout << "Monday"; break;   // if day = 1
        case 2: cout << "Tuesday"; break;  // if day = 2
        case 3: cout << "Wednesday"; break;// if day = 3
        case 4: cout << "Thursday"; break; // if day = 4
        case 5: cout << "Friday"; break;   // if day = 5
        case 6: cout << "Saturday"; break; // if day = 6
        case 7: cout << "Sunday"; break;   // if day = 7
        default: cout << "Invalid day!";   // if input is not 1-7
    }

    return 0;  //tells the computer that program has ended successfully
}
