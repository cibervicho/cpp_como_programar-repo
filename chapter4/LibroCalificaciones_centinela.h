// Fig. 4.12: LibroCalificaciones_centinela.h
// Definicion de la clase LibroCalificaciones que determina el promedio de una clase.
// Las funciones miembro se definen en LibroCalificaciones.cpp
#include <string> // La clase LibroCalificaciones utiliza la clase string estandar de C++

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string); // Constructor que inicializa a nombreCurso
    void establecerNombreCurso(std::string);   // Establece el nombre del curso
    std::string obtenerNombreCurso() const;    // Obtiene el nombre del curso
    void mostrarMensaje() const;               // Muestra un mensaje de bienvenida
    void determinarPromedioClase() const;      // Promedia las calificaciones escritas por el usuario
private:
    std::string nombreCurso; // Nombre del curso para este LibroCalificaciones
}; // Fin de la clase LibroCalificaciones

