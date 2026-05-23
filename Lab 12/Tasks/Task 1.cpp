#include <iostream>                             // Header file for input and output 
 
         using namespace std;                               // Use standard namespace 
  
         // Main function 
        int main() 
        { 
 
        // Declare an integer variable and initialize it 
        int num = 25; 
 
        // Declare a pointer variable of integer type 
        int *ptr; 
 
        // Store the address of num in pointer ptr 
        ptr = &num; 
 
        // Display the value of num 
        cout << "Value of num = " << num << endl; 
 
        // Display the address of num using pointer 
        cout << "Address stored in ptr = " << ptr << endl; 
 
        // Display the value pointed to by ptr using dereference operator 
        cout << "Value pointed by ptr = " << *ptr << endl; 
 
        // End the program successfully 
        return 0; 
        } 
