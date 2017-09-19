// Fig 3.17: fig03_17.cpp
// Crea y manipula un objeto LibroCalificaciones; ilustra la validacion
#include <iostream>
#include "ch3_ej3-11_LibroCalificaciones.h" // Incluye la definicion de la clase LibroCalificaciones
using namespace std;

// La funcion main empieza la ejecucion del programa
int main(void)
{
    // Crea dos objetos LibroCalificaciones
    LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programacion en C++", "David Maldonado Moreno");
    LibroCalificaciones libroCalificaciones2("CS102 C++:Estruc de datos", "Ana Gabriela Perez Avila"); 

    // Muestra el nombreCurso de cada LibroCalificaciones
    cout << "el nombre inicial del curso libroCalificaciones1 es: "
         << libroCalificaciones1.obtenerNombreCurso()
         << "\nel nombre inicial del curso libroCalificaciones2 es: "
         << libroCalificaciones2.obtenerNombreCurso() << endl;
    
    // Modifica el nombreCurso de libroCalificaciones1 (con una cadena de longitud valida)
    libroCalificaciones1.establecerNombreCurso("CS101 Programacion en C++");

    // Muestra el nombreCurso de cada LibroCalificaciones
    cout << "\nel nombre del curso de libroCalificaciones1 es: " << libroCalificaciones1.obtenerNombreCurso()
         << "\nel nombre del curso de libroCalificaciones2 es: " << libroCalificaciones2.obtenerNombreCurso() << endl;

    cout << endl;
    libroCalificaciones1.mostrarMensaje();
    libroCalificaciones2.mostrarMensaje();
} // fin de main

