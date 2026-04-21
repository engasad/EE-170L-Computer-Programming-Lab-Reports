/*Asad ullah
  Reg No : BF25NWELE0686 */


#include <iostream> // input-output library
using namespace std; // standard namespace

int main()  // main function

    {int num; // variable to store user input
    int sum = 0; // variable to store sum, initially 0

    cout << "Enter a positive number: "; // ask user
    cin >> num; // take input

    // loop from 1 to user entered number
    for (int i = 1; i <= num; i++) 
      {  sum = sum + i; // add i into sum
    }

    cout << "Total Sum = " << sum << endl; // display result

    return 0; // program ends

