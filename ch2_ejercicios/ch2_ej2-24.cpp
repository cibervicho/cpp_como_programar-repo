// 2.24 (Odd or Even) Write a program that reads an integer and determines and
//      prints whether its odd or even. [Hint: Use the modulus operator. An even
//      number is a multiple of two. Any multiple of two leaves a remainder of
//      zero when divided by 2.]

#include <iostream>

using namespace std;

int main (void)
{
    int num = 0;
    
    cout << "Write a number: "; cin >> num;

    if ((num % 2) == 0)
        cout << num << " is EVEN (par)." << endl;
    else
        cout << num << " is ODD (impar)." << endl;

    return 0;
}
