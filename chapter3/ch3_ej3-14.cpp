#include <iostream>
#include <string>
#include "ch3_ej3-14_Empleado.h"

using namespace std;

int main (void)
{
    //Inicializacion tradicional
    //Comando de compilacion: 'g++ ch3_ej3-14.cpp ch3_ej3-14_Empleado.cpp'
    //Empleado empleado1("David", "Maldonado", 1000);
    //Empleado empleado2("Karla", "Andrade", 2000);

    //Inicializacion de C++11.
    //Comando de compilacion: 'g++ -std=c++11 ch3_ej3-14.cpp ch3_ej3-14_Empleado.cpp'
    Empleado empleado1{"David", "Maldonado", 1000};
    Empleado empleado2 = {"Karla", "Andrade", 2000};

    cout << "Salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido()
         << " - $" << empleado1.obtenerSalarioAnual() << endl;
    cout << "Salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido()
         << " - $" << empleado2.obtenerSalarioAnual() << endl << endl;

    cout << "Aumentando el 10\% del salario de " << empleado1.obtenerNombre() << endl;
    empleado1.aumentarSalario(10);
    cout << "Aumentando el 10\% del salario de " << empleado2.obtenerNombre() << endl << endl;
    empleado2.aumentarSalario(10);

    cout << "Nuevo salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido()
         << " - $" << empleado1.obtenerSalarioAnual() << endl;
    cout << "Nuevo salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido()
         << " - $" << empleado2.obtenerSalarioAnual() << endl << endl;

    return 0;
}
