// 3.11 (Modificacion de la clase LibroCalificaciones)
// LibroCalificaciones.h
// Definicion de la clase LibroCalificaciones. Este archivo presenta la interfaz
// public de LibroCalificaciones sin revelar las implementaciones de sus funciones
// miembro, que estan definidas en LibroCalificaciones.cpp
#include <string> // La clase LibroCalificaciones utiliza la clase string estandar de C++

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    LibroCalificaciones(std::string, std::string);    // Constructor que inicializa a nombreCurso
    void establecerNombreCurso(std::string);      // Establece el nombre del curso
    std::string obtenerNombreCurso() const;       // Obtiene el nombre del curso
    void establecerNombreInstructor(std::string); // Establece el nombre del instructor
    std::string obtenerNombreInstructor() const;  // Obtiene el nombre del instructor
    void mostrarMensaje() const;                  // Muestra un mensaje de bienvenida
private:
    std::string nombreCurso; // Nombre del curso para este LibroCalificaciones
    std::string nombreInstructor; // Nombre del instructor para este LibroCalificaciones
}; // Fin de la clase LibroCalificaciones

