// 4.26 (Palindromos) Un palindromo es un numero o una frase de texto que se lee igual al derecho y
//      al reves. Por ejemplo, cada uno de los siguientes enteros de cinco digitos es un palindromo:
//      12321, 55555, 45554, 11611. Escriba una aplicacion que lea un entero de cinco digitos y
//      determine si es un palindromo.
#include <iostream>
using namespace std;

int main (void)
{
    int numero = 0;
    int n1, n2, n3, n4, n5; 

    cout << "Escriba un numero de 5 digitos, (-1 para salir): "; cin >> numero;

    while (numero != -1)
    {
        // numero = 12321
        // n1 n2 n3 n4 n5
        // 1  2  3  2  1

        n1 = (numero / 10000) % 10;
        n2 = (numero / 1000)  % 10;
        n3 = (numero / 100)   % 10;
        n4 = (numero / 10)    % 10;
        n5 = (numero / 1)     % 10;

        //cout << "numero: " << numero << endl;
        //cout << "n1:     " << n1 << endl;
        //cout << "n2:     " << n2 << endl;
        //cout << "n3:     " << n3 << endl;
        //cout << "n4:     " << n4 << endl;
        //cout << "n5:     " << n5 << endl;

        if (n1 == n5 && n2 == n4)
            cout << "El numero " << numero << " es palindromo." << endl;
        else
            cout << "El numero " << numero << " no es palindromo." << endl;

        cout << "Escriba un numero de 5 digitos, (-1 para salir): "; cin >> numero;
    }

    return 0;
}
