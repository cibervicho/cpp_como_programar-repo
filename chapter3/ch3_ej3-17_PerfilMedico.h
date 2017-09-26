// 3.17 (Computarizacion de registros medicos) Disene una clase llamada "PerfilMedico" para una
//      persona. Los atributos de la clase deben incluir el primer nombre de la persona, su 
//      apellido, sexo, fecha de nacimiento (que debe consistir de atributos separados para el dia,
//      mes y anio de nacimiento), altura (en centimetros) y peso (en kilogramos). Su clase debe
//      teber un constructor que reciba estos datos. Para cada atributo, debe proveer funciones
//      "establecer" y "obtener". La clase tambien debe incluir metodos que calculen y devuelvan
//      la edad del usuario en anios, la frecuencia cardiaca maxima y el rango de frecuencia
//      cardiaca esperada (vea el ejercicio 3.16), ademas del indice de masa corporal (BMI; vea el
//      ejercicio 2.30). Escriba una aplicacion que pida la informacion de la persona, cree una
//      instancia de un objeto de la clase "PerfilMedico" para esa persona e imprima la informacion
//      de ese objeto (incluyendo el primer nombre, apellido, sexo, fecha de nacimiento, altura y
//      peso), y que despues calcule e imprima la edad de esa persona en anios, junto con el BMI,
//      la frecuencia cardiaca maxima y el rango de frecuencia cardiaca esperada. Tambien debe
//      mostrar la tabla de "valores del BMI" del ejercicio 2.30. Use la misma tecnica del
//      ejercicio 3.16 para calcular la edad de la persona.
//
//      BMI VALUES
//        Underweight: less than 18.5
//        Normal:      between 18.5 and 24.9
//        Overweight:  between 25 and 29.9
//        Obese:       30 or greater

#include<string>

class PerfilMedico
{
private:
    std::string nombre;
    std::string apellido;
    std::string sexo;
    int dia;
    int mes;
    int anio;
    double altura;
    double peso;

public:
    //Constructor
    PerfilMedico(std::string, std::string, std::string, int, int, int, double, double);

    void establecerNombre(std::string);
    void establecerApellido(std::string);
    void establecerSexo(std::string);
    void establecerDia(int);
    void establecerMes(int);
    void establecerAnio(int);
    void establecerAltura(double);
    void establecerPeso(double);

    std::string obtenerNombre() const;
    std::string obtenerApellido() const;
    std::string obtenerSexo() const;
    int obtenerDia() const;
    int obtenerMes() const;
    int obtenerAnio() const;
    std::string obtenerFecha() const;
    double obtenerAltura() const;
    double obtenerPeso() const;

    int obtenerEdad(int, int) const;
    int obtenerFrecuenciaCardiacaMaxima(int, int) const;
    std::string obtenerFrecuenciaCardiacaEsperada(int, int) const;
    double obtenerBMI() const; //bmi = weight/(height * height);
    std::string obtenerEstadoBMI(double) const; //Bajo|Normal|Sobrepeso|Obesidad
};
