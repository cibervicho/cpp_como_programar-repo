// 4.18 (Salida tabular) Escriba un programa en C++ que utilice una instruccion 'while' y la 
//      secuencia de escape de tabulacion '\t' para imprimir una table de valores.

#include <iostream>

using namespace std;

int main (void)
{
    int N = 1;

    cout << "N\t10*N\t100*N\t1000*N" << endl << endl;
    while (N <= 5)
    {   
        cout << N << "\t" << (10 * N) << "\t" << (100 * N) << "\t" << (1000 * N) << endl;
        N++;
    }
}
