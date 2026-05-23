/*Asad Ullah
 BF25NWELE0686*/
 
#include <iostream>   				// Include input-output library
using namespace std; 				 // Use standard namespace

int main() {          					// Main function starts

    int arr[4][4] = {  			 	// Declare and initialize 4x4 array
        {5, 8, 2, 1},   					// Row 1
        {9, 3, 7, 4},   					// Row 2
        {6, 10, 12, 11}			,	// Row 3
        {15, 14, 13, 16}				// Row 4
    };

    int max = arr[0][0];   				// Assume first element is maximum

    for(int i = 0; i < 4; i++) {   			// Loop through rows
        for(int j = 0; j < 4; j++) { 			// Loop through columns
            if(arr[i][j] > max) {  		 		// Check if current element is greater
                max = arr[i][j];   			 	// Update maximum value
            }
        }
    }

    cout << "Maximum value = " << max << endl;	 // Display maximum value

    return 0;   // End program
}




