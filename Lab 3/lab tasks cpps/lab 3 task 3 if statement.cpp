/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>             // tells the compiler to include standard input output library
using namespace std;             // allows us to use cout and cin without having the need to type std:: for each

int main() {               // execution of main function beginns from here
	int a;                 // variable declaration
	
	cout<<"enter an integer ";     // prompt for user to input data
	cin>>a;                    // takes data from user and puts it in variable
	
	if(a>0)                             // condition if a is grater than 0
	cout<<"the number is positive"<<endl;  // prints message if a is greater than 0
	else                                   // runs if the if condition fails
	cout<<"the number is negative"<<endl;  // prints the message if the number is smaller than 0 
	
	return 0;              // tells the operating system that program has finishe

}
