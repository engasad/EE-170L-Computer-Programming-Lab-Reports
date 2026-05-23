/*Asad Ullah
 BF25NWELE0686*/
 
#include <iostream>   // Include input-output library
using namespace std;  // Use standard namespace

int main() {          // Main function starts

    int arr[3][3] = {   // Declare and initialize 3x3 array
        {2, 4, 6},      // Row 1
        {1, 3, 5},      // Row 2
        {7, 8, 9}       // Row 3
    };

    int totalSum = 0;   				// Variable to store total sum

    // Calculate row sums
    for(int i = 0; i < 3; i++) {  			 // Loop through rows
        int rowSum = 0;           			 	// Initialize row sum
        for(int j = 0; j < 3; j++) { 			// Loop through columns
            rowSum += arr[i][j];  			 // Add each element of row
        }
        cout << "Sum of Row " << i+1 << " = " << rowSum << endl; // Display row sum
    }

    // Calculate column sums
    for(int j = 0; j < 3; j++) {  			 // Loop through columns
        int colSum = 0;            				// Initialize column sum
        for(int i = 0; i < 3; i++) {			 // Loop through rows
            colSum += arr[i][j];   			// Add each element of column
        }
        cout << "Sum of Column " << j+1 << " = " << colSum << endl; // Display column sum
    }
    // Calculate total sum
    for(int i = 0; i < 3; i++) {  		 	// Loop rows
        for(int j = 0; j < 3; j++) { 			// Loop columns
            totalSum += arr[i][j]; 			// Add all elements
        }
    }
    cout << "Total Sum = " << totalSum << endl; 	// Display total sum

    return 0;   // End program
}


