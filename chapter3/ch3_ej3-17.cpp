#include <iostream>
#include <string>
#include "ch3_ej3-17_PerfilMedico.h"

using namespace std;

int main (void)
{
    int mesActual, anioActual;
    string nombre, apellido, sexo;
    int dia, mes, anio;
    double peso, altura;

    cout << "+++ PERFIL MEDICO +++" << endl << endl;
    cout << "Escriba el mes actual [1..12]: "; cin >> mesActual;
    cout << "Escriba el anio actual: "; cin >> anioActual;
    cout << endl;
    cout << "Escriba su nombre y apellido: "; cin >> nombre >> apellido;
    cout << "Escriba su sexo: [M|F]: "; cin >> sexo;
    cout << "Escriba su fecha de nacimiento separada por espacios [dd mm AAAA]: ";
    cin >> dia >> mes >> anio;
    cout << "Escriba su peso (kilogramos): "; cin >> peso;
    cout << "Escriba su altura (metros): "; cin >> altura;
    cout << endl;
    
    cout << "Creando Perfil Medico..." << endl << endl;
    PerfilMedico pm1(nombre, apellido, sexo, dia, mes, anio, altura, peso);

    cout << "   Nombre del Paciente: " << pm1.obtenerNombre() << " " << pm1.obtenerApellido() << endl;
    cout << "   Fecha de Nacimiento: " << pm1.obtenerFecha() << endl;
    cout << "   Altura del Paciente: " << pm1.obtenerAltura() << " m" << endl;
    cout << "   Peso del Paciente:   " << pm1.obtenerPeso() << " kg" << endl;
    cout << "   Edad del Paciente:   " << pm1.obtenerEdad(mesActual, anioActual) << " años" << endl;
    cout << "   BMI:                 " << pm1.obtenerBMI() << " - (" 
                                       << pm1.obtenerEstadoBMI(pm1.obtenerBMI()) << ")" << endl;
    cout << "   Frec. Cardiaca Max:  " << pm1.obtenerFrecuenciaCardiacaMaxima(mesActual, anioActual)
                                       << endl;
    cout << "   Frec. Car. Esperada: " << endl;
    pm1.obtenerFrecuenciaCardiacaEsperada(mesActual, anioActual);
    cout << endl;

    return 0;
}
