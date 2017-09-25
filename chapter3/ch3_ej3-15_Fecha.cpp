#include <iostream>
#include <string>
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
        cout << " ERROR: El valor del mes debe ser entre 1 (Enero) y 12 (Diciembre). \
                  estableciendo el mes a 1 (Enero)." << endl;
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
    switch (obtenerDia()) {
        case 1: fecha += "1"; break;
        case 2: fecha += "2"; break;
        case 3: fecha += "3"; break;
        case 4: fecha += "4"; break;
        case 5: fecha += "5"; break;
        case 6: fecha += "6"; break;
        case 7: fecha += "7"; break;
        case 8: fecha += "8"; break;
        case 9: fecha += "9"; break;
        case 10: fecha += "10"; break;
        case 11: fecha += "11"; break;
        case 12: fecha += "12"; break;
        case 13: fecha += "13"; break;
        case 14: fecha += "14"; break;
        case 15: fecha += "15"; break;
        case 16: fecha += "16"; break;
        case 17: fecha += "17"; break;
        case 18: fecha += "18"; break;
        case 19: fecha += "19"; break;
        case 20: fecha += "20"; break;
        case 21: fecha += "21"; break;
        case 22: fecha += "22"; break;
        case 23: fecha += "23"; break;
        case 24: fecha += "24"; break;
        case 25: fecha += "25"; break;
        case 26: fecha += "26"; break;
        case 27: fecha += "27"; break;
        case 28: fecha += "28"; break;
        case 29: fecha += "29"; break;
        case 30: fecha += "30"; break;
        case 31: fecha += "31"; break;
        default: fecha = "ERROR"; break;
    }
    fecha += "/";
    switch (obtenerMes()) {
        case 1: fecha += "1"; break;
        case 2: fecha += "2"; break;
        case 3: fecha += "3"; break;
        case 4: fecha += "4"; break;
        case 5: fecha += "5"; break;
        case 6: fecha += "6"; break;
        case 7: fecha += "7"; break;
        case 8: fecha += "8"; break;
        case 9: fecha += "9"; break;
        case 10: fecha += "10"; break;
        case 11: fecha += "11"; break;
        case 12: fecha += "12"; break;
        default: fecha += "ERROR"; break;
    }
    fecha += "/";
        //fecha = string(itoa(obtenerDia())) + "/" + string(itoa(obtenerMes())) + "/" + string(itoa(obtenerAnio()));
    return fecha;
}
