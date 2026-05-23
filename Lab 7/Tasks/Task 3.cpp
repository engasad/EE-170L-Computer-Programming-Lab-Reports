/*Asad Ullah
BF25NWELE0686*/

#include <iostream>           			// Include library
using namespace std;         			 // Use namespace
int main() {                 			 	// Main function
    int source[5] = {1, 2, 3, 4, 5}; 		// Initialize source array
    int destination[5];              			// Declare destination array

    for(int i = 0; i < 5; i++) {    		 // Loop for copying
        destination[i] = source[i];  		// Copy each element
    }
    cout << "Source Array:\n";      		 // Display source array
    for(int i = 0; i < 5; i++) {     		// Loop through source
        cout << source[i] << " ";    		// Print source elements
    }
    cout << "\nDestination Array:\n"; 	// Display destination array
    for(int i = 0; i < 5; i++) {     		 // Loop through destination
        cout << destination[i] << " "; 		// Print destination elements
    }
    return 0;   					// End program
}

