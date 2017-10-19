// 4.34 (Factorial) El factorial de un entero 'n' no negativo se escribe como 'n!' (n factorial) y
//      se define de la siguiente manera:
//          n! = n * (n-1) * (n-2) * ... * 1    (para valores de n mayores o iguales a 1)
//      y
//          n! = 1 (para n=0 o n=1).
//
//      c) Escriba una aplicacion que calcule el valor de e^x ('e' a la 'x'), utilizando la formula:
//
//              e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ...
//
//         Pida al usuario la precision deseada de 'e' (es decir, el numero de terminos de la suma)
#include <iostream>
using namespace std;

int main(void)
{
    int n = 0;         // Precision deseada del usuario
    int n_bkp = 0;     // Backup de la precicion deseada del usuario
    double e = 1;      // Constante matematica 'e'
    double e_bkp = 0;  // Constante matematica 'e'
    int x = 0;

    cout << endl << "CALCULO DE LA CONSTANTE MATEMATICA 'e'" << endl << endl;
    cout << "Escriba la precision deseada para la constante 'e^x': "; cin >> n;
    cout << endl;

    // Respaldamos el valor de 'n'
    n_bkp = n;
    x = n_bkp;

    // Calculo de la constante
   while (n_bkp >= 1)
    {
        while (n >= 1)
        {
            if(n != 1)
                x *= n_bkp;
            n--;
        }
        n = n_bkp;
        while (n >= 1)
        {
            e *= n--; // calculando factorial
        }
        cout << "potencia:  " << x << endl;
        cout << "factorial: " << e << endl;
        e_bkp += x/e;
        cout << x << "/" << e << " = " << e_bkp << endl;
        e = 1;     // reseteamos el valor de e para calcular el nuevo factorial
        --n_bkp;   // restamos iteracion para controlar sumas
        n = n_bkp; // reseteamos el valor de 'n' para calcular el nuevo factorial
        x = n;
    }
    e_bkp += 1; // sumamos el ultimo 1, segun la formula

    cout << "El valor de 'e^x' es: " << e_bkp << endl;

    return 0;
}
