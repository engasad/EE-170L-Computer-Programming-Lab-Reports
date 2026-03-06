/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>                     // tells the cmpiler to include standard input output library
using namespace std;          // allows us to use cout and cin without tyiping std:: for every one

int main(){                            //starting point of the main function
	int a,b;                    // variable declaration 
	cout<<"enter an integer ";   // prompt for user to input data
	cin>>a;                            // takes input from user and places it in the variable
	cout<<"enter 2nd integer ";           // 2nd prompt for user to input data 
	cin>>b;                             // takes data from user and places it in the variable
	
	if(a>=b)                              // condition for true

    cout<<a<<"is greater than or equal to  "<<b; //  prints the result if the if condition met
    else                                                // part which runs if the if condition fails
    cout<<a<<"is less than "<<b;                 //prints result for a smaller than b
    
    return 0;                         // tells the operating system that the program finished successfully
	
	
}
