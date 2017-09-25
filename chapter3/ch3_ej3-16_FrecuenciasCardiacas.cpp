#include <iostream>
#include <string>
#include "ch3_ej3-16_FrecuenciasCardiacas.h"

using namespace std;

FrecuenciasCardiacas::FrecuenciasCardiacas(string name, string lastname, int day, int month, int year)
    : nombre(name), apellido(lastname), anio(year), diaActual(0), mesActual(0), anioActual(0)
{
    establecerDia(day);
    establecerMes(month);
    //establecerAnio(year);
}

void FrecuenciasCardiacas::establecerNombre(string name)
{
    nombre = name;
}
void FrecuenciasCardiacas::establecerApellido(string lastname)
{
    apellido = lastname;
}
void FrecuenciasCardiacas::establecerDia(int day)
{
    if ((day >= 1) && (day <= 31))
        dia = day;
    else {
        cout << "   +++ERROR: Dia [" << day << "] invalido. Dia establecido a '1'." << endl;
        dia = 1;
    }
}
void FrecuenciasCardiacas::establecerMes(int month)
{
    if ((month >= 1) && (month <= 12))
        mes = month;
    else {
        cout << "   +++ERROR: Mes [" << month << "] invalido. Mes establecido a '1'." << endl;
        mes = 1;
    }
}
void FrecuenciasCardiacas::establecerAnio(int year)
{
    anio = year;
}
void FrecuenciasCardiacas::establecerDiaActual(int day)
{
    if ((day >= 1) && (day <= 31))
        diaActual = day;
    else {
        cout << "   +++ERROR: Dia [" << day << "] invalido. Dia establecido a '1'." << endl;
        diaActual = 1;
    }
}
void FrecuenciasCardiacas::establecerMesActual(int month)
{
    if ((month >= 1) && (month <= 12))
        mesActual = month;
    else {
        cout << "   +++ERROR: Mes [" << month << "] invalido. Mes establecido a '1'." << endl;
        mesActual = 1;
    }
}
void FrecuenciasCardiacas::establecerAnioActual(int year)
{
    anioActual = year;
}


string FrecuenciasCardiacas::obtenerNombre() const
{
    return nombre;
}
string FrecuenciasCardiacas::obtenerApellido() const
{
    return apellido;
}
int FrecuenciasCardiacas::obtenerDia() const
{
    return dia;
}
int FrecuenciasCardiacas::obtenerMes() const
{
    return mes;
}
int FrecuenciasCardiacas::obtenerAnio() const
{
    return anio;
}
int FrecuenciasCardiacas::obtenerDiaActual() const
{
    return diaActual;
}
int FrecuenciasCardiacas::obtenerMesActual() const
{
    return mesActual;
}
int FrecuenciasCardiacas::obtenerAnioActual() const
{
    return anioActual;
}
int FrecuenciasCardiacas::obtenerEdad() const
{
    int edad = 0;

    if (mesActual > mes)
        edad = (anioActual - anio);
    else
        edad = ((anioActual - anio) - 1);

    return edad;
}
int FrecuenciasCardiacas::obtenerFrecuenciaCardiacaMaxima() const
{
    return (220 - obtenerEdad());
}
string FrecuenciasCardiacas::obtenerFrecuenciaCardiacaEsperada() const
{
    int fc50 = 0;
    int fc85 = 0;
    int fcProm = 0;
    int fcMax = obtenerFrecuenciaCardiacaMaxima();

    fc50 = (fcMax * 50) / 100; //50% de FC Maxima
    fc85 = (fcMax * 85) / 100; //80% de FC Maxima
    fcProm = (fc50 + fc85) / 2;//Promedio de las 2 frecuencias
    cout << "50%\tProm\t85%\tMax\n" << fc50 << "\t" << fcProm << "\t" << fc85 << "\t" << fcMax << endl;
    return "";
}
