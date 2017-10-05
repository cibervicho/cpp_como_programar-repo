// 4.16 (Calculadora de salario) Desarrlle un programa en C++ que utilice una instruccion 'while'
//      para determinar el sueldo bruto para cada uno de varios empleados. La empresa paga la
//      'cuota normal' en las primeras 40 horas de trabajo de cada empleado, y paga la 'cuota y
//      media' en todas las horas trabajadas que excedan de 40. Usted recibe una lista de los 
//      empleados de la empresa, el numero de horas que trabajo cada empleado la semana pasada y la
//      tarifa por horas de cada empleado. Su programa debe recibir como entrada esta informacion
//      para cada empleado, debe determinar y mostrar el sueldo bruto de cada empleado.
#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    int horas = 0;
    double tarifa = 0;
    double salario = 0;

    cout << "Introduzca las horas laboradas (o -1 para salir): "; cin >> horas;

    while (horas != -1)
    {
        cout << "Introduzca la tarifa por horas del empleado ($00.00): "; cin >> tarifa;

        if (horas <= 40)
            salario = horas * tarifa;
        else
            salario = horas * tarifa + (tarifa / 2);

        cout << "El salario es: " << salario << endl << endl;

        cout << "Introduzca las horas laboradas (o -1 para salir): "; cin >> horas;
    }

    return 0;
}
