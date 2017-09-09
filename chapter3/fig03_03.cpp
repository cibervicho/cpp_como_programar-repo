// Fig 3.3: fig03_03.cpp
// Define la clase LibroCalificaciones con una funcion miembro que recibe un parametro.
// Crea un objeto LibroCalificaciones y llama a su funcion mostrarMensaje.
#include <iostream>
#include <string>

using namespace std;

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    // Funcion que muestra un mensaje de bienvenida para el usuario
    // de LibroCalificaciones
    void mostrarMensaje(string nombreCurso) const
    {
        cout << "Bienvenido al Libro de calificaciones para\n" << nombreCurso << "!" << endl;
    } // Fin de de la funcion mostrarMensaje()
}; // Fin de la clase LibroCalificaciones

// La funcion main() empieza la ejecucion del programa
int main(void)
{
    // Cadena de caracteres que almacena el nombre del curso
    string nombreDelCurso;

    // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones
    LibroCalificaciones miLibroCalificaciones;

    // Pide y recibe el nombre del curso como entrada
    cout << "Escribe el nombre del curso: " << endl;

    // Lee el nombre de un curso con espacios en blanco
    getline (cin, nombreDelCurso);
    
    // Imprime una linea en blanco
    cout << endl;

    // Llama a la funcion mostrarMensaje del objeto
    miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
} // Fin de main
