// 4.31 Que esta mal con la siguiente instruccion? Propocione la instruccion correcta para realizar
//      lo que probablemente el programador trataba de hacer.
//          cout << ++(x + y);
#include <iostream>
using namespace std;

int main (void)
{
    int x = 0, y = 0;

    //cout << ++(x + y) << endl; //error: lvalue required as increment operand
    cout << ++x + y << endl; //This could be an option.

    return 0;
}
