/*Asad Ullah
  BF25NWELE0686*/

#include <iostream>              // Header file for input and output 
using namespace std;             // Allows use of standard names  
like cout and endl 
void multiply(int num1, int num2)                        
// Function definition for multiplication 
{ 
      int product = num1 * num2;     // Calculate the product of two numbers 
      cout << "Product = " << product << endl;        // Display the product 
} 
int getSquare(int number)         // Function definition to calculate square 
{ 
 
       
int square = number * number;   // Calculate square of the number 
          return square;                              // Return the square value 
} 
int main()                              //  Main function where program execution  
                                                   starts 
{ 
      multiply(5, 4);               // Call multiply function and pass two numbers 
          int result;                       // Declare variable to store returned value 
      result = getSquare(6); // Call getSquare function and store returned value 
      cout << "Square = " << result << endl;    // Display the square result 
      return 0;                                                     // Indicate successful program 
         termination 
}
