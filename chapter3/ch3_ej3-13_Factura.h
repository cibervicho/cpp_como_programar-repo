// 3.13 (Clase Factura) Cree una clase llamada "Factura", que una ferreteria podria utilizar para representar una
// factura por un articulo vendido en la tienda. Una factura debe incluir cuatro datos miembros: un "numeroDeArticulo"
// (tipo string), la "descripcionDeArticulo" (tipo string), la "cantidadDeArticulo" de ese tipo que se van a comprar
// (tipo int) y el "precioPorArticulo" (tipo int). Su clase debe tener un constructor que inicialice los cuatro
// datos miembro. Proporcione una funcion "establecer" y una funcion "obtener" para cada miembro de datos. Ademas,
// proporcione una funcion llamada "obtenerMontoFactura", que calcule el monto de la factura (es decir, que multiplique
// la cantidad por el precio por articulo) y despues devuelva ese monto como un valor int. Si la cantidad no es positiva,
// debe establecerse en 0. Si el precio por articulo no es positivo, debe establecerse en 0. Escriba el programa de
// prueba que demiestre las capacidades de la clase Factura.

#include <string>

class Factura
{
public:
    Factura(std::string, std::string, int, int);

    void        establecerNumeroDeArticulo(std::string);
    std::string obtenerNumeroDeArticulo() const;
    void        establecerDescripcionDeArticulo(std::string);
    std::string obtenerDescripcionDeArticulo() const;
    void        establecerCantidadDeArticulo(int);
    int         obtenerCantidadDeArticulo() const;
    void        establecerPrecioPorArticulo(int);
    int         obtenerPrecioPorArticulo() const;
    int         obtenerMontoFactura() const;

private:
    std::string numeroDeArticulo;
    std::string descripcionDeArticulo;
    int         cantidadDeArticulo;
    int         precioPorArticulo;
};

