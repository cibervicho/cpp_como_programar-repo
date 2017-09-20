// 3.12 (Clase Cuenta) Cree una clase llamada "Cuenta" que podria ser utilizada por un banco para representar las
// cuentas bancarias de sus clientes. Incluya un miembro de datos de tipo int para representar el "saldo" de la cuenta.
// Proporcione un constructor que reciba un saldo inicial y lo utilice para inicializar el dato miembro. El constructor
// debe validar el saldo inicial para asegurar que sea mayor o igual a 0. De no ser asi,  establezca el saldo en 0 y
// muestre un mensaje de error, indicando que el saldo inicial era invalido. Proporcione tres funciones miembro. La
// funcion miembro "abonar" debe agregar un monto al saldo actual. La funcion miembro "cargar" debera retirar dinero
// del objeto "Cuenta" y asegurarse que el monto a cargar no exceda el saldo de la cuenta. Si lo hace, el saldo debe
// permanecer sin cambio y la funcion debe imprimir un mensaje que indique "El monto a cargar excede el saldo de la
// cuenta." La funcion miembro "obtenerSaldo" debe devolver el saldo actual. Cree un programa que cree dos objetos
// "Cuenta" y evalue las funciones miembro de la clase "Cuenta".

class Cuenta
{
public:
    explicit Cuenta(int);
    
    void     abonar(int);
    void     cargar(int);
    int      obtenerSaldo() const;
private:
    int saldo;
};
