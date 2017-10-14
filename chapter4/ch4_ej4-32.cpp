// 4.32 (Lados de un triangulo) Escriba un programa que lea tres valores double distintos de cero, y
//      y que determine e imprima si podrian representar los lados de un triangulo.

#include <iostream>
using namespace std;

int main (void)
{
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;

    cout << "Ingresa el largo del lado 1: "; cin >> lado1;
    cout << "Ingresa el largo del lado 2: "; cin >> lado2;
    cout << "Ingresa el largo del lado 3: "; cin >> lado3;
    cout << endl;

    if ((lado1 == lado2) && (lado2 == lado3))
        cout << "Los tres lados corresponden a un TRIANGULO EQUILATERO" << endl;
    else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3))
        cout << "Los tres lados corresponden a un TRIANGULO ISOCELES" << endl;
    else
        cout << "Los tres lados corresponden a un TRIANGULO ESCALENO" << endl;

    return 0;
}
