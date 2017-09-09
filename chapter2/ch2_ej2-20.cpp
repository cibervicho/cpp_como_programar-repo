// 2.20 (Diametro, Circunferencia y area de un circulo) Escriba un programa que lea el radio de un circulo
//      como un entero e imprima el diametro del circulo, la circunferencia y el area. Use el valor
//      constante 3.14159 para PI. Realice todos los calculos en instrucciones de salida. [Nota: en este
//      capitulo solo se han visto constantes y valiables tipo entero. En el capitulo 4 se hablara sobre
//      los numeros de punto flotante].

#include <iostream>

using namespace std;

int main (void)
{
    int PI = 3.14159;

    int radio    = 0;
    int diametro = 0;
    int circunf  = 0;
    int area     = 0;

    cout << "Escriba el valor del radio: ";
    cin >> radio;

    cout << "Diametro del circulo:       " << (2 * radio) << endl;
    cout << "Circunferencia del cirulo:  " << (PI * radio) << endl;
    cout << "Area del circulo:           " << (PI * radio * radio) << endl << endl;

    return 0;
}
