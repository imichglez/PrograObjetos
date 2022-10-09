// Ingrid González
// A01641116

#include <iostream>
#include "complejo.h"
using namespace std;

int main(){
    double n =2;
    Complejo num1(3,5);
    Complejo num2(5,-12);
    Complejo r1, r2, r3, r4;

    // prueba agregado
    num1.agregar(num2);
    num1.imprime();

    // prueba conjugado
    r1 = num1.conjugado();
    r1.imprime();

    // prueba suma
    r2 = num1.suma(num2);
    r2.imprime();

    // prube multiplicación
    r3 = num1.multi(num2);
    r3.imprime();

    // prubea multiplicación escalar
    r4 = r1.multiEscalar(n);
    r4.imprime();

    return 0;
};