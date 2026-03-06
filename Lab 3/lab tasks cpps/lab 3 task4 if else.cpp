/* Name: Asad Ullah*/
/* Roll No: 5121220 / BF25NWELE0686 */

#include <iostream>  // tells the compiler toinclude input output stream library
using namespace std; // uses standard namespaces without having to write std:: for every cin and cout

int main() {             //the main function from where the execution starts
	
	int age;                        // variable declaration
	cout<<"enter your age";       // asks the user to provide their age
	cin>>age;                    // takes the data and puts i into the variable
	if(age>=18)                      //cheaks if the value in age is 18 or greater
	cout<<"you are an edult"<<endl;       // if the condition mets it prints you are an adult now
	else                                  // this part rund if the if condition fails
	cout<<"you are a minor"<<endl;          // prints you are a minor
	
	return 0;                         // tells the operating system that program has finishe

}
