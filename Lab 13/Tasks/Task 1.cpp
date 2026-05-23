#include <iostream>         // for input/output 
using namespace std;        // to use cout without std:: 
struct Person                     // structure declaration 
{ 
    string name;                  // member to store name 
    int age;                    // member to store age 
    string address;               // member to store address 
int main(){ 
    Person person1;                      // creating structure variable 
    person1.name = "Asad";        // assigning name 
    person1.age = 20;                   // assigning age 
    person1.address = "Peshawar";                // assigning address 
    cout << "Name: " << person1.name ;       // display name 
    cout << "Age: " << person1.age ;             // display age 
    cout << "Address: " << person1.address ;  // display address 
    return 0;   }                                                    // program ends 
