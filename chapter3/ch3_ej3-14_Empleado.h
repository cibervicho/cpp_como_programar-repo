// 3.14 (Clase Empleado) Cree una clase llamada "Empleado", que incluya tres piezas de informacion
// como datos miembros: un primer nombre (tipo string), un apellido paterno (tipo string) y un
// salario mensual (tipo float). Su clase debe tener un constructor que inicialice los tres datos
// miembros. Proporcione una funcion "establecer" y una funcion "obtener" para cada dato miembro.
// Si el salario mensual no es positivo, establezcalo en 0. Escriba un programa de prueba que
// demuestre las capacidades de la clase "Empleado". Cree dos objetos "Empleado" y muestre el
// salario "anual" de cada objeto. Despues, proporcione a cada "Empleado" un aumento del 10% y
// muestre el salario anual de cada "Empleado" otra vez.

#include <string>

class Empleado
{
private:
    std::string nombre;
    std::string apellido;
    float         salario;

public:
    Empleado(std::string, std::string, float);

    void establecerNombre(std::string);
    void establecerApellido(std::string);
    void establecerSalario(float);

    std::string obtenerNombre() const;
    std::string obtenerApellido() const;
    float         obtenerSalario() const;
    float         obtenerSalarioAnual() const;
    
    void aumentarSalario(float);
};

