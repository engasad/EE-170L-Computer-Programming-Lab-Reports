 #include <iostream>       // Header file for input and output 
 
 using namespace std;      // Use standard namespace 
 
 int main()  // Main function 
  { 
     // Declare and initialize an integer array 
     int numbers[5] = {10, 20, 30, 40, 50}; 
     int *ptr;   // Declare a pointer variable 
 
    // Initialize pointer to point to first element of array 
     ptr = numbers; 
 
     // Display array elements using pointer arithmetic 
     cout << "Array elements using pointer arithmetic:" << endl; 
 
     // Access elements using pointer arithmetic 
     cout << *(ptr + 0) << endl;   // First element 
     cout << *(ptr + 1) << endl;   // Second element 
     cout << *(ptr + 2) << endl;   // Third element 
     cout << *(ptr + 3) << endl;   // Fourth element 
     cout << *(ptr + 4) << endl;   // Fifth element 
     return 0;     // End the program successfully 
 }
