// 3.16 (Calculadora de la frecuencia cardiaca esperada) Cree una clase llamada FrecuenciasCardiacas.
// Los atributos de la clase deben incluir el primer nombre de la persona, su apellido y fecha de 
// nacimiento (la cual debe consistir de atributos separados para el mes, dia y anio de nacimiento).
// Su clase debe tener un constructor que reciba estos datos como parametros. Para cada atributo
// debe proveer funciones "establecer" y "obtener". La clase tambien debe incluir una funcion
// "obtenerEdad" que calcule y devuelva la edad de la persona (en anios), una funcion 
// "obtenerFrcuenciaCardiacaMaxima" que calcule y devuelva la frecuencia cardiaca maxima de esa persona,
// y una funcion "obtenerFrecuenciaCardiaEsperada" que calcule y devuelva la frecuencia cardiaca
// esperada de la persona. La funcion "obtenerEdad" debe pedir al usuario que introduzca el mes, dia y
// anio actual antes de calcular la edad de la persona. Escriba una aplicacion que pida la informacion
// de la persona, cree una instancia de un objeto de la clase "FrecuenciasCardiacas" e imprima
// la informacion a partir de ese objeto (nombre completo de la persona, fecha de nacimiento), y despues
// que calcule e imprima la edad de la persona (en anios), frecuencia cardiaca maxima y rango de
// frecuencia cardiaca esperada.

#include <iostream>

class FrecuenciasCardiacas
{
private:
    std::string nombre;
    std::string apellido;
    int dia;  //Dia de nacimiento
    int mes;  //Mes de nacimiento
    int anio; //Anio de nacimiento
    int diaActual;  //Dia en curso
    int mesActual;  //Mes en curso
    int anioActual; //Anio en curso
public:
    FrecuenciasCardiacas(std::string, std::string, int, int, int);

    void establecerNombre(std::string);
    void establecerApellido(std::string);
    void establecerDia(int);
    void establecerMes(int);
    void establecerAnio(int);
    void establecerDiaActual(int);
    void establecerMesActual(int);
    void establecerAnioActual(int);

    std::string obtenerNombre() const;
    std::string obtenerApellido() const;
    int obtenerDia() const;
    int obtenerMes() const;
    int obtenerAnio() const;
    int obtenerDiaActual() const;
    int obtenerMesActual() const;
    int obtenerAnioActual() const;

    //std::string mostrarFecha() const; //Formato: dd/mm/AAAA
    int obtenerEdad() const; //Obtiene edad de la persona en anios.
    int obtenerFrecuenciaCardiacaMaxima() const;
    int obtenerFrecuenciaCardiacaEsperada() const;
};
