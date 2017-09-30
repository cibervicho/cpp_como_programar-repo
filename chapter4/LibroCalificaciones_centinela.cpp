// LibroCalificaciones.cpp
// Definicion de las funciones miembro de LibroCalificaciones que resuelve el programa del promedio
//  de la clase con repeticion controlada por centinela.
#include <iostream>
#include <iomanip> //Manipuladores de flujo parametrizados
#include "LibroCalificaciones_centinela.h" // Incluye la definicion de la clase LibroCalificaciones
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
    if(nombre.size() <= 25) // Si nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    else // Si el nombre es mayor a 25 caracteres
    { // Establece nombreCurso a los primeros 25 caracteres del parametro nombre
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
         << "!" << endl;
} // Fin de la funcion mostrarMensaje

void LibroCalificaciones::determinarPromedioClase() const
{
    //fase de inicializacion
    int total = 0; //Suma de las calificaciones introducidas por el usuario
    unsigned int contadorCalif = 0; //Numero de la calificacion a introducir a continuacion

    //fase de procesamiento
    //pide la entrada y lee la calificacion del usuario
    cout << "Escriba la calificacion o -1 para salir: ";
    int calificacion = 0; //Valor de la calificacion
    cin >> calificacion; //Recibe como entrada la calificacion o el valor centinela
    
    //Itera hasta leer el valor centinela del usuario
    while (calificacion != -1) //Mientras calificacion no sea -1
    {
        total = total + calificacion; //Suma la calificacion total
        contadorCalif = contadorCalif + 1; //Incrementa el contador por 1

        //Pide la entrada y lee la siguiente calificacion del usuario
        cout << "Escriba la calificacion o -1 para salir: ";
        cin >> calificacion; //Recibe como entrada la calificacion o el valor centinela
    } //Fin de while

    //Fase de Terminacion
    if (contadorCalif != 0) //Si el usuario introdujo al menos una calificacion...
    {
        //Calcula el promedio de todas las calificaciones introducidas
        double promedio = static_cast<double>(total) / contadorCalif;

        //muestra el total y el promedio (con dos digitos de precision)
        cout << "\nEl total de las " << contadorCalif << " calificaciones es " << total << endl;
        cout << setprecision(2) << fixed;
        cout << "El promedio de la clase es " << promedio << endl;
    } //Fin de if
    else //No se introdujeron calificaciones, por lo que imprime el mensaje apropiado
        cout << "No se introdujeron calificaciones" << endl;
} //fin de la funcion determinarPromedioClase()
