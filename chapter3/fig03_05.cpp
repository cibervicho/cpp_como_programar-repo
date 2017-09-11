// Fig 3.5: fig03_05.cpp
// Defines class GradeBook that contains a courseName data member and member
// functions to set and get its value;
// Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// Definicion de la clase LibroCalificaciones
class GradeBook
{
public:
    // Function that sets the course name
    void setCourseName(string name)
    {
        courseName = name; //Store the course name in the object
    } // End function setCourseName

    // Function that gets the course name
    string getCourseName() const
    {
        return courseName; // Returns the object's courseName
    } // End function getCourseName

    // Funcion que muestra un mensaje de bienvenida para el usuario
    // de LibroCalificaciones
    void displayMessage() const
    {
        cout << "Bienvenido al Libro de calificaciones para\n" << getCourseName() << "!" << endl;
    } // Fin de de la funcion mostrarMensaje()

private:
    string courseName; // course name for this GradeBook
}; // Fin de la clase LibroCalificaciones

// La funcion main() empieza la ejecucion del programa
int main(void)
{
    // Cadena de caracteres que almacena el nombre del curso
    string nameOfCourse;

    // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones
    GradeBook myGradeBook;

    // Display initial value of courseName
    cout << "Nombre inicial del curso: " << myGradeBook.getCourseName() << endl;

    // Pide y recibe el nombre del curso como entrada
    cout << endl << "Escribe el nombre del curso: " << endl;

    // Lee el nombre de un curso con espacios en blanco
    getline (cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);
    
    // Imprime una linea en blanco
    cout << endl;

    // Llama a la funcion mostrarMensaje del objeto
    myGradeBook.displayMessage();
} // Fin de main
