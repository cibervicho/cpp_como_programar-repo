// 4.28 (Patron de ajedrez de asteriscos) Escribe una programa que muestre un patron de tablero de
//      ajedrez. El programa debe utilizar solo tres instrucciones de salida, una para cada una de
//      las siguientes formas:
//          cout << "* ";
//          cout << ' ';
//          cout << endl;
#include <iostream>
using namespace std;

int main (void)
{
    int x = 1, y = 1;

    while (y <= 8)
    {
        if((y % 2) == 0)
            cout << ' ';

        while (x <= 8)
        {
            cout << "* ";
            ++x;
        }
        cout << endl;
        x = 1;
        ++y;
    }
    y = 1;

    return 0;
}
