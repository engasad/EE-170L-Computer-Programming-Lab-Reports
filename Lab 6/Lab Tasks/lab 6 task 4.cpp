/*Asad ullah
  Reg No : BF25NWELE0686 */


#include <iostream> // input-output library
using namespace std; // standard namespace

int main()  // main function

    {int rows; // variable for number of rows

    cout << "Enter number of rows: "; // ask user
    cin >> rows; // take input

    // outer loop for rows
    for (int i = 1; i <= rows; i++) 

      {  // inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "* "; // print star
        }

        cout << endl; // move to next line
    }

    return 0; // end program
}
