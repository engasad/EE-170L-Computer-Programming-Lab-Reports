/*Asad Ullah
BF25NWELE0686*/

#include <iostream>           				// Include library
using namespace std;          				// Use namespace
int main() {                  				// Main function
    char message[] = "HELLO"; 			// Declare and initialize character array
    cout << "Characters are:\n"; 			// Display message
    for(int i = 0; message[i] != '\0'; i++) { 		// Loop until null character
        cout << message[i] << endl;}        		// Print each character on new line
    return 0;   						// End program
}

