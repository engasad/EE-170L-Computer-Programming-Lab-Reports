/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>  // tells the compiler to include standard input output stream library
using namespace std;  // allows us to use cout and cin without having the need to typ std:: for each cin and cout

int main() {                 // main function execution beggins from here 
	
	int a;                                // variable declarartion
	cout<<"enter a number";             // displays are request to the user
	cin>>a;                                     // stores the user input data into variable 
	if(a>0)                                   // cheaks if the number is greater than 0
	cout<<"the number is positive";               // displays thre message if the number is greater than 0
	else if(a<0)                                // if test 1 fails , it cheaks if the number is less than o
	cout<<"the number is negative";              // confirms that the number is negative
	else if(a==0)                              // cheaks that if the number is exactly 0
	cout<<"the number you entered is zero";         // final confirmation for 0
	
	return 0;                            // tells the operating system that program has finishe
	

}
