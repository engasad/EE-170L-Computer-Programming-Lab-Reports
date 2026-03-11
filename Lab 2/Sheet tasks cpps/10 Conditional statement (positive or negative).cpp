/*Asad ullah
  Reg No:BF25NWELE0686
*/
#include <iostream>
using namespace std;

int main()
{
    int number;   // Variable to store integer

    cout << "Enter an integer: ";
    cin >> number;   // User enters number

    // Check condition
    if (number >= 0)
    {
        // If number is positive or zero
        cout << "You entered a positive integer: " << number << endl;
    }
    else
    {
        // If number is negative
        cout << "You entered a negative integer: " << number << endl;
    }

    return 0;
}
