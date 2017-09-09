// Fig 3.1: fig03_01.cpp
// Define la clase LibroCalificaciones con una funcion miembro llamada mostrarMensaje.
// Crea un objeto LibroCalificaciones y llama a su funcion mostrarMensaje.
#include <iostream>

using namespace std;

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    // Funcion que muestra un mensaje de bienvenida para el usuario
    // de LibroCalificaciones
    void mostrarMensaje() const
    {
        cout << "Bienvenido al Libro de calificaciones!" << endl;
    } // Fin de de la funcion mostrarMensaje()
}; // Fin de la clase LibroCalificaciones

// La funcion main() empieza la ejecucion del programa
int main(void)
{
    // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones
    LibroCalificaciones miLibroCalificaciones;

    // Llama a la funcion mostrarMensaje del objeto
    miLibroCalificaciones.mostrarMensaje();
} // Fin de main
