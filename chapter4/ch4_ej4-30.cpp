// 4.30 (Calcular el diametro, circunferencia y area de un circulo) Escriba un programa que lea el
//      radio de un circulo (double), calcule el diametro, circunferencia y el area. Use el valor
//      de 3.14159 para pi.
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    const double PI = 3.14159;

    double diametro = 0;
    double circunfe = 0;
    double area     = 0;
    double radio    = 0;

    cout << "Ingrese el radio del circulo: "; cin >> radio;

    diametro = 2 * radio;
    circunfe = diametro * PI;
    area     = PI * radio * radio;

    cout << "Diametro del circulo: " << diametro << endl;
    cout << setprecision(2) << fixed;
    cout << "Circunferencia del circulo: " << circunfe << endl;
    cout << "Area del circulo: " << area << endl;

    return 0;
}
