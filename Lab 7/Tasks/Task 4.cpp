/*Asad Ullah
BF25NWELE0686*/

#include <iostream> 			// Include library
using namespace std; 			// Use namespace
int main() { 				// Main function
int arr[5];				            // Declare array
int sum = 0; 				// Variable to store sum
cout << "Enter 5 numbers:\n";		// Prompt user
for(int i = 0; i < 5; i++) {			// Loop for input
cin >> arr[i];				// Store input in array
}
for(int i = 0; i < 5; i++) { 		// Loop for sum
sum += arr[i];				// Add each element to sum
}
cout << "Sum = " << sum; 		// Display result
return 0;					// End program
}


