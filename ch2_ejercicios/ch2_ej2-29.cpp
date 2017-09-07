// 2.29 (Table) Using the techniques of this chapter, write a program that calculates
//      the squares and cubes of the integers from 0 to 10. Use tabs to print the
//      neatly formatted table of values.

#include <iostream>

using namespace std;

int main (void)
{
    int i = 0;
    for (i = 0; i < 11; i++) {
        cout << "\t" << i << "\t" << (i * i) << "\t" << (i * i * i) << endl;
    }
    return 0;
}
