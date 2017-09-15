// Fig 3.7: LibroCalificaciones.h
// Definicion de la clase LibroCalificaciones en un archivo separado de main.
#include <iostream>
#include <string> // La clase LibroCalificaciones utiliza la clase string estandar de C++

// Definicion de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    // El constructor inicializa nombreCurso con la cadena que se suministra como argumento
    explicit LibroCalificaciones(std::string nombre) 
     : nombreCurso(nombre) // Inicializador de miembro para inicializar nombreCurso
    {
        // cuerpo vacio
    } // Fin del constructor de LibroCalificaciones

    // Funcion para establecer el nombre del curso
    void establecerNombreCurso(std::string nombre)
    {
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    } // Fin de la funcion establecerNombreCurso

    // Funcion para obtener el nombre del curso
    std::string obtenerNombreCurso() const
    {
        return nombreCurso; // devuelve el nombreCurso del objeto
    } // Fin de la funcion obtenerNombreCurso

    // Muestra un mensaje de bienvenida al usuario de LibroCalificaciones
    void mostrarMensaje() const
    {
        // Llama a obtenerNombreCurso para obtener el nombreCurso
        std::cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
             << "!" << std::endl;
    } // Fin de la funcion mostrarMensaje
private:
    std::string nombreCurso; // Nombre del curso para este LibroCalificaciones
}; // Fin de la clase LibroCalificaciones

