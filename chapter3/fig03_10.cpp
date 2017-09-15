// Fig 3.10: fig03_10.cpp
// Inclusion de la clase LibroCalificaciones del archivo LibroCalificaciones.h para usarla en main
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definicion de la clase LibroCalificaciones
using namespace std;

// La funcion main empieza la ejecucion del programa
int main(void)
{
    // Crea dos objetos LibroCalificaciones
    LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programacion en C++");
    LibroCalificaciones libroCalificaciones2("CS102 Estructuras de datos en C++"); 

    // Muestra el valor inicial nombreCurso para cada LibroCalificaciones
    cout << "libroCalificaciones1 creado para el curso: " << libroCalificaciones1.obtenerNombreCurso()
         << "\nlibroCalificaciones2 creado para el curso: " << libroCalificaciones2.obtenerNombreCurso()
         << endl;
} // fin de main

