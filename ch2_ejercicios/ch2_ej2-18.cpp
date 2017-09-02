// 2.18 (Comparacion de enteros) Escriba un programa que pida al usuario que escriba dos enteros,
//      obtenga los numeros del usuario y luego imprima el numero mas grande, seguido de las
//      palabras "es mas grande". Si los numeros son iguales, imprima el mensaje "Estos numeros
//      son iguales".

#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;

    cout << "Escribe un numero: ";
    cin >> num1;

    cout << "Escribe otro numero: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "Estos numeros son iguales." << endl;
    }
    else if (num1 > num2) {
        cout << "El numero " << num1 << " es mas grande." << endl;
    }
    else {
        cout << "El numero " << num2 << " es mas grande." << endl;
    }

    return 0;
}
