/*Asad Ullah
 BF25NWELE0686*/
 
#include <iostream>   		// Include input-output library
using namespace std;  		// Use standard namespace

int main() {          			// Main function starts

    int matrix[3][3] = {  		 // Declare and initialize 3x3 array
        {1, 2, 3},         		// First row
        {4, 5, 6},        		// Second row
        {7, 8, 9}         		// Third row
    };

    cout << "Matrix Elements:\n";   	// Display heading

    for(int i = 0; i < 3; i++) {    	// Loop for rows
        for(int j = 0; j < 3; j++) { 	// Loop for columns
            cout << matrix[i][j] << " "; 	// Print each element
        }
        cout << endl;              		// Move to next line after each row
    }

    return 0;  			 // End of program
}


