/*Asad ullah
 BF25NWELE0686*/


#include <iostream>              // Include input-output library
using namespace std;             // Use standard namespace

int calculateSum(int arr[], int size) { // Function to calculate sum
    int sum = 0;                 // Initialize sum variable

    for(int i = 0; i < size; i++) { // Loop through array
        sum += arr[i];           // Add each element to sum
    }

    return sum;                  // Return total sum
}

int main() {                     // Main function

    int arr[10];                 // Declare array of size 10
    int sum;                     // Variable to store sum
    float average;               // Variable to store average

    cout << "Enter 10 numbers:\n"; // Prompt user

    for(int i = 0; i < 10; i++) { // Loop for input
        cin >> arr[i];            // Store input in array
    }

    sum = calculateSum(arr, 10);  // Call function and store result

    average = (float)sum / 10;    // Calculate average

    cout << "Sum = " << sum << endl;         // Display sum
    cout << "Average = " << average << endl; // Display average

    return 0;                     // End program
}
