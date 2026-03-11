/*Asad ullah
  Reg No:BF25NWELE0686
*/

#include <iostream>
using namespace std;

// Function declaration
int addTwo(int x, int y);

int main()
{
    int a, b, sum;

    // Ask user for input
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Call function
    sum = addTwo(a, b);

    // Display result
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}

// Function definition
int addTwo(int x, int y)
{
    return (x + y);   // Return addition
}
