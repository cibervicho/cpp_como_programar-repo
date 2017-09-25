#include <iostream>
#include <string>
#include "ch3_ej3-14_Empleado.h"

using namespace std;

Empleado::Empleado(string nom, string ape, float sal)
                   : nombre(nom), apellido(ape)
{
    establecerSalario(sal);
}

void Empleado::establecerNombre(string nom)
{
    nombre = nom;
}
void Empleado::establecerApellido(string ape)
{
    apellido = ape;
}
void Empleado::establecerSalario(float sal)
{
    if (sal >= 0)
        salario = sal;
    else
        salario = 0;
}
string Empleado::obtenerNombre() const
{
    return nombre;
}
string Empleado::obtenerApellido() const
{
    return apellido;
}
float Empleado::obtenerSalario() const
{
    return salario;
}
float Empleado::obtenerSalarioAnual() const
{
    return (obtenerSalario() * 12);
}
void Empleado::aumentarSalario(float aumento)
{
    float salarioActual = obtenerSalario();
    float factorAumento = salarioActual * (aumento / 100);
    float nuevoSalario = salarioActual + factorAumento;
    establecerSalario(nuevoSalario);
}
