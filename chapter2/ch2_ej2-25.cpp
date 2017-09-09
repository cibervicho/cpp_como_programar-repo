// 2.25 (Multiples) Write a program that reads in two integers and determines
//      and prints if the first is a multiple of the second. [Hint: Use the
//      modulus operator.]

#include <iostream>

using namespace std;

int main (void)
{
    int num1 = 0;
    int num2 = 0;
    
    cout << "Write number 1: "; cin >> num1;
    cout << "Write number 2: "; cin >> num2;

    if (num1 > num2) {
        if ((num1 % num2) == 0)
            cout << "[" << num1 << "] and [" << num2 << "] are multiples." << endl;
        else
            cout << "[" << num1 << "] and [" << num2 << "] are NOT multiples." << endl;
    }
    else {
        if ((num2 % num1) == 0)
            cout << "[" << num1 << "] and [" << num2 << "] are multiples." << endl;
        else
            cout << "[" << num1 << "] and [" << num2 << "] are NOT multiples." << endl;
    }

    return 0;
}
