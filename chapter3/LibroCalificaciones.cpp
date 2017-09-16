// LibroCalificaciones.cpp
// Definicion de las funciones miembro de LibroCalificaciones. Este archivo contiene
// implementaciones de las funciones miembro cuyo prototipoesta en LibroCalificaciones.h
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definicion de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones(string nombre) 
{
    establecerNombreCurso(nombre); // valida y almacena NombreCurso
} // Fin del constructor de LibroCalificaciones

// Funcion para establecer el nombre del curso;
// Asegura que el nombre del curso tenga como maximo 25 caracteres
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if(nombre.size() <= 25) { // Si nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    }

    if(nombre.size() > 25) { // Si nombre es mayor a 25 caracteres
        // Establecer nombreCurso a los primeros 25 caracteres del parametro nombre
        nombreCurso = nombre.substr(0, 25); // Empieza en 0, longitud de 25

        cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
                "Se limito nombreCurso a los primeros 25 caracters\n" << endl;
    } // Fin de if
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

