// Fig. 4.10: fig04_10.cpp
// Crea un objeto LibroCalificaciones e invoca a su funcion determinarPromedioClase()
#include "LibroCalificaciones.h" //Incluye la definicion de la clase LibroCalificaciones

int main()
{
    //Crea un objeto LibroCalificaciones llamado miLibroCalificaciones y pasa el nombre
    //del curso al constructor
    LibroCalificaciones miLibroCalificaciones("CS101 Programacion en C++");

    miLibroCalificaciones.mostrarMensaje(); //Muestra el mensaje de bienvenida
    miLibroCalificaciones.determinarPromedioClase(); //Busca el promedio de 10 calificaciones

    return 0;
} //Fin de main

