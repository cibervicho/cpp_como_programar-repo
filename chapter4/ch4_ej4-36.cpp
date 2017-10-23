// 4.36 (implementar privacidad con criptografia) Una compania que desea enviar datos por Internet
//      pide que escriba un programa que los cifre, de modo que se puedan transmitir con mas
//      seguridad. Todos los datos se transmiten como enteros de cuatro digitos. Su aplicacion debe
//      leer un entero de cuatro digitos introducido por el usuario, y cifrarlo de la siguiente
//      manera:
//      Reemplace cada digito por el resultado de sumarle 7 y obtenga el residuo despues de dividir
//      el nuevo valor entre 10. Despues intercambie el primer digito con el tercero, y el segundo
//      digito con el cuarto. Luego imprima el entero cifrado.
//      Escriba una aplicacion separada que reciba como entrada el numero entero de cuatro digitos
//      cifrado y lo descifre (invirtiendo el esquema de cifrado) para formar el numero original.
//
//
//
//input: 1234
//1  2  3  4
//7  7  7  7 +
//------------
//8  9  10  11
//10 10 10  10 %
//---------------
//8  9  0   1
//0  1  8   9     -> 0189
//
//
//
//n % p = m
//m % p = n
//
//mn = 1 % p
