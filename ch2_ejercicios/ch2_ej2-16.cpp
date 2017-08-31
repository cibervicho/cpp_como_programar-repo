// 2.16 (Aritmetica) Escriba un programa que pida al usuario que escriba dos numeros,
//      obtenga esos dos numeros del usuario e imprima la suma, producto, diferencia
//      y cociente de los dos numeros.

#include <iostream>

using namespace std;

int main (void) {
    int num1 = 0;
    int num2 = 0;

    cout << "Escribe un numero: ";
    cin >> num1;

    cout << "Escribe otro numero: ";
    cin >> num2;
    cout << endl;

    cout << "Suma: \t\t"       << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "Producto: \t"   << num1 << " x " << num2 << " = " << (num1 * num2) << endl;
    cout << "Diferencia: \t" << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "Cociente: \t"   << num1 << " / " << num2 << " = " << (num1 / num2) << endl;

    return 0;
}
