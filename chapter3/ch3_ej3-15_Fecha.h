// 3.15 (Clase Fecha) Cree una clase llamada Fecha, que incluya tres piezas de informacion como
//      datos miembros: un mes (tipo int), un dia (tipo int) y un anio (tipo int). Su clase debe
//      tener un constructor con tres parametros, los cuales deben utilizar para inicializar los
//      tres datos miembros. Para los fines de este ejercicio, suponga que los valores que se
//      proporcionan para el anio y el dia son correctos, pero asegurese que el valor del mes se 
//      encuentre en el rango de 1 a 12; de no ser asi, establezca el mes en 1. Proporcione una
//      funcion "establecer" y una funcion "obtener" para cada miembro de datos. Proporcione una
//      funcion miembro "mostrarFecha", que muestre el mes, dia y anio, separados por barras
//      diagonales (/). Escriba un programa de prueba que demuestre las capacidades de la clase
//      "Fecha".

#include <string>

class Fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha(int, int, int);
    void establecerDia(int);
    void establecerMes(int);
    void establecerAnio(int);
    int  obtenerDia() const;
    int  obtenerMes() const;
    int  obtenerAnio() const;
    std::string mostrarFecha() const;
};

