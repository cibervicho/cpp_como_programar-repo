#include <iostream>
#include <string>
#include "ch3_ej3-16_FrecuenciasCardiacas.h"

using namespace std;

int main (void)
{
    FrecuenciasCardiacas fc1("David", "Maldonado", 6, 5, 1981);

    int val = 0;
    
    cout << "Escriba el dia de hoy [1..31]: "; cin >> val;
    fc1.establecerDiaActual(val);
    
    cout << "Escriba el mes de hoy [1..12]: "; cin >> val;
    fc1.establecerMesActual(val);

    cout << "Escriba el anio de hoy: "; cin >> val;
    fc1.establecerAnioActual(val);

    cout << endl;

    cout << "Nombre: " << fc1.obtenerNombre() << " " << fc1.obtenerApellido() << endl;
    cout << "Edad: " << fc1.obtenerEdad() << " años." << endl;
    cout << "Fecha de Nac: " << fc1.obtenerDia() << "/" << fc1.obtenerMes() << "/" << fc1.obtenerAnio() << endl;
    cout << "Fecha de Hoy: " << fc1.obtenerDiaActual() << "/" << fc1.obtenerMesActual() << "/" << fc1.obtenerAnioActual() << endl;
    cout << "Frecuencia Cardiaca Maxima: " << fc1.obtenerFrecuenciaCardiacaMaxima() << endl;
    cout << "Frecuencia Cardiaca Esperada: " << fc1.obtenerFrecuenciaCardiacaEsperada() << endl;

    return 0;
}
