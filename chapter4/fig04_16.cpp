// Fig 4.16: fig04_16.cpp
// Problema de los resultados del examen: instrucciones de control anidadas.
#include <iostream>
using namespace std;

int main (void)
{
    //inicializacion de las variables en las declaraciones
    unsigned int aprobados = 0; //numero de aprobados
    unsigned int reprobados = 0; //numero de reprobados
    unsigned int  contadorEstudiantes = 1; //contador de estudiantes

    //procesa 10 estudiantes usando un ciclo controlado por contador
    while (contadorEstudiantes <= 10)
    {
        //pide datos de entrada y obtiene el valor del usuario
        cout << "Escriba el resultado (1=aprobado, 2=reprobado): ";
        int resultado = 0; //resultado de un examen (1=aprobado, 2=reprobado)
        cin >> resultado; // recibe como entrada el resultado

        //if...else anidado en la instruccion while
        if (resultado == 1)                 // si el resultado es 1
            aprobados = aprobados + 1;      // incrementa aprobados;
        else                                // resultado no es 1, por lo que
            reprobados = reprobados + 1;    // incrementa reprobados

        //incrementa el contadorEstudiantes para que el ciclo termine en cierto momento
        contadorEstudiantes = contadorEstudiantes + 1;
    } //fin del while

    //fase de terminacion; muestra el numero de aprobados y reprobados
    cout << "Aprobados " << aprobados << "\nReprobados: " << reprobados << endl;

    //determina si aprobaron mas de ocho estudiantes
    if (aprobados > 8)
        cout << "Bono para el instructor!!!" << endl;
} //fin del main
