// 4.33 (Lados de un triangulo recto) Escriba un programa que lea tres enteros distintos a cero, y
//      que determine e imprima si podrian ser los lados de un triangulo recto.
#include <iostream>
using namespace std;

int main(void)
{
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;

    cout << "Ingrese el valor del lado1: "; cin >> lado1;
    cout << "Ingrese el valor del lado2: "; cin >> lado2;
    cout << "Ingrese el valor del lado3: "; cin >> lado3;

    // Una de las propiedades de los triangulos rectos es que el cuadrado de la hipotenusa es
    // igual a la suma del cuadrado de los catetos.
    //     i.e. cateto1=3, cateto2=4, hipotenusa=5

    // Cuando lado1 es la hipotenusa
    if ((lado1 > lado2) && (lado1 > lado3))
    {
        cout << "*El Lado1 es la hipotenusa" << endl;
        if ((lado1 * lado1) == ((lado2 * lado2) + (lado3 * lado3)))
            cout << "Los 3 lados corresponden a un TRIANGULO RECTO" << endl;
        else
            cout << "No es un triangulo recto!!!" << endl;
    }
    // Cuando lado2 es la hipotenusa
    else if ((lado2 > lado1) && (lado2 > lado3))
    {
        cout << "*El Lado2 es la hipotenusa" << endl;
        if ((lado2 * lado2) == ((lado1 * lado1) + (lado3 * lado3)))
            cout << "Los 3 lados corresponden a un TRIANGULO RECTO" << endl;
        else
            cout << "No es un triangulo recto!!!" << endl;
    }
    // Cuando lado3 es la hipotenusa
    else if ((lado3 > lado1) && (lado3 > lado2))
    {
        cout << "*El Lado3 es la hipotenusa" << endl;
        if ((lado3 * lado3) == ((lado1 * lado1) + (lado2 * lado2)))
            cout << "Los 3 lados corresponden a un TRIANGULO RECTO" << endl;
        else
            cout << "No es un triangulo recto!!!" << endl;
    }
    else
        cout << "ERROR: Nunca deberiamos de caer en este caso!!!" << endl;

    return 0;
}
