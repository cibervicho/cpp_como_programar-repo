#include <iostream>
#include <string>
#include <cstdio>
#include "ch3_ej3-15_Fecha.h"

using namespace std;

Fecha::Fecha(int dia, int mes, int anio)
{
    establecerDia(dia);
    establecerMes(mes);
    establecerAnio(anio);
}

void Fecha::establecerDia(int valor)
{
    // Suponiendo que el valor es un dato valido.
    dia = valor;
}
void Fecha::establecerMes(int valor)
{
    if ((valor >= 1) && (valor <= 12))
        mes = valor;
    else {
        cout << "   +++ERROR: El valor [" << valor << "] para el mes debe ser entre 1 (Enero) y 12 (Diciembre)." << endl;
        cout << "             Estableciendo el mes a 1 (Enero)." << endl << endl;
        mes = 1;
    }
}
void Fecha::establecerAnio(int valor)
{
    // Suponiendo que el valor es un dato valido.
    anio = valor;
}
int Fecha::obtenerDia() const
{
    return dia;
}
int Fecha::obtenerMes() const
{
    return mes;
}
int Fecha::obtenerAnio() const
{
    return anio;
}
string Fecha::mostrarFecha() const
{
    string fecha;
    int Number; // number to convert
    char Result[4]; // string which will contain the number

    Number = obtenerDia();
    sprintf (Result, "%d", Number); // %d makes the result be a decimal integer
    fecha += Result; //Dia
    fecha += "/";
    Number = obtenerMes();
    sprintf (Result, "%d", Number);
    fecha += Result; //Mes
    fecha += "/";
    Number = obtenerAnio();
    sprintf (Result, "%d", Number);
    fecha += Result; //Anio

    //fecha = static_cast<string>(obtenerDia()) + "/" + static_cast<string>(obtenerMes()) + "/" + static_cast<string>(obtenerAnio());
    return fecha;
}
