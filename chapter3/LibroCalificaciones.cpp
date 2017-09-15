// LibroCalificaciones.cpp
// Definicion de las funciones miembro de LibroCalificaciones. Este archivo contiene
// implementaciones de las funciones miembro cuyo prototipoesta en LibroCalificaciones.h
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definicion de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones(string nombre) 
 : nombreCurso(nombre) // Inicializador de miembro para inicializar nombreCurso
{
    // cuerpo vacio
} // Fin del constructor de LibroCalificaciones

// Funcion para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    nombreCurso = nombre; // Almacena el nombre del curso en el objeto
} // Fin de la funcion establecerNombreCurso

// Funcion para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso; // devuelve el nombreCurso del objeto
} // Fin de la funcion obtenerNombreCurso

// Muestra un mensaje de bienvenida al usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    // Llama a obtenerNombreCurso para obtener el nombreCurso
    std::cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
         << "!" << std::endl;
} // Fin de la funcion mostrarMensaje

