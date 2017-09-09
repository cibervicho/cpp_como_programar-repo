// 2.17 (Impresion) Escriba un programa que imprima los numeros 1 a 4 en la misma linea
//      con cada par de numeros adyacentes separados por un espacio. Haga esto de varias
//      formas:
//          a) Utilizando una instruccion con un operador de insercion de flujos.
//          b) Utilizando una instruccion con cuatro operadores de insercion de flujos.
//          c) Utilizando cuatro instrucciones.

#include <iostream>

int main (void) {
	std::cout << "1 2 3 4\n";

	std::cout << "1 " << "2 " << "3 " << "4\n";

	std::cout << "1 ";
	std::cout << "2 ";
	std::cout << "3 ";
	std::cout << "4 ";
	std::cout << std::endl;
}
