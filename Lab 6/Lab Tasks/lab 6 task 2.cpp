/*Asad ullah
  Reg No : BF25NWELE0686 */

#include <iostream> // input-output library
using namespace std; // standard namespace

int main()  // main function

   { // outer loop controls rows (tables 1 to 10)
    for (int i = 1; i <= 10; i++) {

        // inner loop controls columns (multipliers 1 to 10)
        for (int j = 1; j <= 10; j++) 

         {   // print multiplication in format (e.g., 2x3=6)
            cout << i << "x" << j << "=" << i * j << "\t";
        }

        cout << endl; // move to next line after each row
    }

    return 0; // end program
}
