#include <iostream>
#include <string>
#include <cstdio>
#include "ch3_ej3-17_PerfilMedico.h"

using namespace std;

PerfilMedico::PerfilMedico(string nombre, string apellido, string sexo,
        int dia, int mes, int anio, double altura, double peso): nombre(nombre),
    apellido(apellido), sexo(sexo), anio(anio), altura(altura), peso(peso)
{
    establecerDia(dia);
    establecerMes(mes);
}
void PerfilMedico::establecerNombre(string name)
{
    nombre = name;
}
void PerfilMedico::establecerApellido(string lastname)
{
    apellido = lastname;
}
void PerfilMedico::establecerSexo(string sex)
{
    sexo = sex;
}
void PerfilMedico::establecerDia(int day)
{
    if ((day >= 1) && (day <= 31))
        dia = day;
    else {
        cout << "   +++ERROR: Dia [" << day << "] invalido. Dia establecido a '1'." << endl;
        dia = 1;
    }
}
void PerfilMedico::establecerMes(int month)
{
    if ((month >= 1) && (month <= 12))
        mes = month;
    else {
        cout << "   +++ERROR: Mes [" << month << "] invalido. Mes establecido a '1'." << endl;
        mes = 1;
    }
}
void PerfilMedico::establecerAnio(int year)
{
    anio = year;
}
void PerfilMedico::establecerAltura(double height)
{
    altura = height;
}
void PerfilMedico::establecerPeso(double weight)
{
    peso = weight;
}

string PerfilMedico::obtenerNombre() const
{
    return nombre;
}
string PerfilMedico::obtenerApellido() const
{
    return apellido;
}
string PerfilMedico::obtenerSexo() const
{
    return sexo;
}
int PerfilMedico::obtenerDia() const
{
    return dia;
}
int PerfilMedico::obtenerMes() const
{
    return mes;
}
int PerfilMedico::obtenerAnio() const
{
    return anio;
}
string PerfilMedico::obtenerFecha() const
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

    return fecha;
}
double PerfilMedico::obtenerAltura() const
{
    return altura;
}
double PerfilMedico::obtenerPeso() const
{
    return peso;
}
int PerfilMedico::obtenerEdad(int mesActual, int anioActual) const
{
    int edad = 0;

    if (mesActual > mes)
        edad = (anioActual - anio);
    else
        edad = ((anioActual - anio) - 1);

    return edad;
}
int PerfilMedico::obtenerFrecuenciaCardiacaMaxima(int mesActual, int anioActual) const
{
    return (220 - obtenerEdad(mesActual, anioActual));
}
string PerfilMedico::obtenerFrecuenciaCardiacaEsperada(int mesActual, int anioActual) const
{
    int fc50 = 0;
    int fc85 = 0;
    int fcProm = 0;
    int fcMax = obtenerFrecuenciaCardiacaMaxima(mesActual, anioActual);

    fc50 = (fcMax * 50) / 100; //50% de FC Maxima
    fc85 = (fcMax * 85) / 100; //80% de FC Maxima
    fcProm = (fc50 + fc85) / 2;//Promedio de las 2 frecuencias
    cout << "    50%\tProm\t85%\tMax\n    " << fc50 << "\t" << fcProm << "\t" << fc85 << "\t" << fcMax << endl;
    return "";
}
double PerfilMedico::obtenerBMI() const
{
    double bmi;
    bmi = obtenerPeso()/(obtenerAltura() * obtenerAltura());
    return bmi;
}
string PerfilMedico::obtenerEstadoBMI(double bmi) const
{
    string estado;
    if (bmi < 18.5)
        estado = "Bajo en Peso";
    else if (bmi >= 18.5 && bmi <= 24.9)
        estado = "Peso Normal";
    else if (bmi >= 25 && bmi <=29.9)
        estado = "Sobrepeso";
    else
        estado = "Obesidad";

    return estado;
}
