/*Asad Ullah
BF25NWELE0686*/


#include <iostream>          			// Include input-output library
using namespace std;         			// Use standard namespace
int main() {                 				// Main function start
    int numbers[5] = {10, 20, 30, 40, 50}; 	// Declare and initialize array
    cout << "Array elements are:\n";       	// Display message
    for(int i = 0; i < 5; i++) {           		// Loop through array
        cout << numbers[i] << " ";         	// Print each element
    }
    return 0;   					// End program
}

