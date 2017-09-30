// Fig. 4.14: fig04_14.cpp
// Crea un objeto LibroCalificaciones e invoca a su funcion determinarPromedioClase()
#include "LibroCalificaciones_centinela.h" //Incluye la definicion de la clase LibroCalificaciones

int main()
{
    //Crea un objeto LibroCalificaciones llamado miLibroCalificaciones y pasa el nombre
    //del curso al constructor
    LibroCalificaciones miLibroCalificaciones("CS101 Programacion en C++");

    miLibroCalificaciones.mostrarMensaje(); //Muestra el mensaje de bienvenida
    miLibroCalificaciones.determinarPromedioClase(); //Busca el promedio de "n" calificaciones

    return 0;
} //Fin de main

