/*Asad Ullah
  BF25NWELE0686*/


#include <iostream>        // Header file for input and output 
using namespace std;    
// Function definition for multiplication 
void multiply(int num1, int num2) 
{ 
         // Calculate the product of two numbers 
         int product = num1 * num2; 
         // Display the product 
       
   cout << "Product = " << product << endl; 
} 
// Function definition to calculate square 
int getSquare(int number) 
{ 
      // Calculate square of the number 
        int square = number * number; 
      // Return the square value 
        return square; 
} 
// Main function where program execution starts 
int main() 
{ 
      // Call multiply function and pass two numbers 
 
 
 
   
multiply(5, 4); 
       // Declare variable to store returned value 
          int result; 
       // Call getSquare function and store returned value 
           result = getSquare(6); 
       // Display the square result 
           cout << "Square = " << result << endl; 
      // Indicate successful program termination 
           return 0; 
}
