// 4.34 (Factorial) El factorial de un entero 'n' no negativo se escribe como 'n!' (n factorial) y
//      se define de la siguiente manera:
//          n! = n * (n-1) * (n-2) * ... * 1    (para valores de n mayores o iguales a 1)
//      y
//          n! = 1 (para n=0 o n=1).
//
//      a) Escriba un programa que lea un entero no negativo, que calcule e imprima su factorial.

#include <iostream>
using namespace std;

int main(void)
{
    int n = 0;
    int n_bkp = 0;
    int factorial = 1;

    cout << "Escriba el valor de 'n' para calcular su factorial: "; cin >> n;

    // Respaldamos el valor de 'n'
    n_bkp = n;

    // Calculo del factorial
    if ((n == 0) || (n == 1))
        factorial = 1;
    while (n > 1)
    {
        factorial *= n--;
    }

    cout << "El factorial de '" << n_bkp << "' es: " << factorial << endl;

    return 0;
}
