// 2.28 (Digits of an Integer) Write a program that inputs a five-digit integer,
//      separates the integer into its digits and prints them separated by three
//      spaces each. [Hint: Use the integer division and modulus operators.] For
//      example, if the user types in 42339, the program should print:
//      4 2 3 3 9

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
    int number = 0;
    int numDigits = 0;

    cout << "Enter a number (max of 10 digits): ";
    cin >> number;

    // This is not asked but may help in the future...
    numDigits = log10(number) + 1;
    cout << "\nThe number of digits of [" << number << "] is: " << numDigits << endl;

    cout << endl;
    cout << "Output: " << (number / 10000) % 10;
    cout << " " << (number / 1000) % 10;
    cout << " " << (number / 100)  % 10;
    cout << " " << (number / 10)   % 10;
    cout << " " << (number / 1)    % 10 << endl;

    return 0;
}
