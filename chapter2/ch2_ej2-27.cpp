// 2.27 (Integer Equivalent of a Character) Write a program that prints the
//      integer equivalent of a character typed at the keyboard. Store the
//      input in a variable of type char. Test your program several times
//      using uppercase letters, lowercase letters, digits and special
//      characters (like $).

#include <iostream>

using namespace std;

int main (void)
{
    char var;

    cout << "Write any letter/digit/symbol: ";
    cin >> var;

    // cout << 'A' << endl;
    // cout << static_cast<int>('A') << endl;

    cout << "Integer representation of [" << var << "]: " << static_cast<int>(var) << endl;

    return 0;
}
