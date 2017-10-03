// Fig.4.19: fig04_19.cpp
// Preincremento y Postincremento
#include <iostream>
using namespace std;

int main(void)
{

    //demuestra postincremento
    int c = 5; //asigna 5 a c
    cout << c << endl;      //imprime 5
    cout << c++ << endl;    //imprime 5 y despues postincrementa
    cout << c << endl;      //imprime 6

    cout << endl; //salta una linea

    //demuestra preincremento
    c = 5; //asigna 5 a c
    cout << c << endl;      //imprime 5
    cout << ++c << endl;    //incrementa y despues imprime 6
    cout << c << endl;      //imprime 6

    return 0;
} //fin del main
