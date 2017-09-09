// 2.23 (Largest and Smallest Integers) Write a program that reads in five
//      integers and determines and prints the largest and the smallest in
//      the group. Use only the programming techniques you learned in the
//      chapter 2.

#include <iostream>

using namespace std;

int main (void)
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int largest = 0;
    int smaller = 0;

    cout << "Write 5 numbers separated by a blank space: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Determines the largest number
    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                if (num1 > num5) {
                    largest = num1;
                }
                else {
                    largest = num5;
                }
            }
            else if (num4 > num5) {
                largest = num4;
            }
            else {
                largest = num5;
            }
        }
        else if (num3 > num4) {
            if (num3 > num5) {
                largest = num3;
            }
            else {
                largest = num5;
            }
        }
        else if (num4 > num5) {
            largest = num4;
        }
        else {
            largest = num5;
        }
    }
    else if (num2 > num3) {
        if (num2 > num4) {
            if (num2 > num5) {
                largest = num2;
            }
            else {
                largest = num5;
            }
        }
        else if (num4 > num5) {
            largest = num4;
        }
        else {
            largest = num5;
        }
    }
    else if (num3 > num4) {
        if (num3 > num5) {
            largest = num3;
        }
        else {
            largest = num5;
        }
    }
    else if (num4 > num5) {
        largest = num4;
    }
    else {
        largest = num5;
    }

    // Determines the smaller number
    if (num1 < num2) {
        if (num1 < num3) {
            if (num1 < num4) {
                if (num1 < num5) {
                    smaller = num1;
                }
                else {
                    smaller = num5;
                }
            }
            else if (num4 < num5) {
                smaller = num4;
            }
            else {
                smaller = num5;
            }
        }
        else if (num3 < num4) {
            if (num3 < num5) {
                smaller = num3;
            }
            else {
                smaller = num5;
            }
        }
        else if (num4 < num5) {
            smaller = num4;
        }
        else {
            smaller = num5;
        }
    }
    else if (num2 < num3) {
        if (num2 < num4) {
            if (num2 < num5) {
                smaller = num2;
            }
            else {
                smaller = num5;
            }
        }
        else if (num4 < num5) {
            smaller = num4;
        }
        else {
            smaller = num5;
        }
    }
    else if (num3 < num4) {
        if (num3 < num5) {
            smaller = num3;
        }
        else {
            smaller = num5;
        }
    }
    else if (num4 < num5) {
        smaller = num4;
    }
    else {
        smaller = num5;
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smaller number is: " << smaller << endl << endl;

    return 0;
}
