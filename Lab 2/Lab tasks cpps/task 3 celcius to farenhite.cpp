/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>   // tells the compiler to include input output stream library
using namespace std;  // Use standard namespace instead of writing std:: for each cout and cin

int main() {            // start of main function 
    double celsius;   // Declare variable to store Celsius temperature
    cout << "Enter temperature in Celsius: ";  // Prompt user for input
    cin >> celsius;   // takes value from user and stores that value in a variable

    double fahrenheit = (celsius * 9.0 / 5.0) + 32; // Convert Celsius to Fahrenheit using formula
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl; // Print result to display

    return 0;  //tells the computer that program has ended successfully
}
