#include <iostream>
#include <string>
using namespace std;

// Ingrid González
// A01641116

struct Complejo{
    double real, imaginario, escalar; 
};

void imprimir(Complejo c){
    printf("(%.2f + %.2fi) \n", c.real,c.imaginario);
};

Complejo agrComp(Complejo c1, Complejo c4){
    Complejo a;

    a.real = c1.real + c4.real;
    a.imaginario = c1.imaginario + c4.imaginario;

    return a;
};

Complejo conjComp(Complejo c1){
    Complejo c;

    c.real = c1.real;
    c.imaginario = -c1.imaginario;

    return c;
}

Complejo sumaComp(Complejo c1, Complejo c2){
    Complejo s;

    s.real = c1.real + c2.real;
    s.imaginario = c1.imaginario + c2.imaginario;

    return s;
};

Complejo multiComp(Complejo c1, Complejo c2){
    Complejo m;

    m.real = c1.real*c2.real - c1.imaginario*c2.imaginario;
    m.imaginario = c1.real*c2.imaginario - c1.real*c2.imaginario;

    return m;
};

Complejo multiescComp(Complejo c1, Complejo c3){
    Complejo e;

    e.real = c1.real*c3.real;
    e.imaginario = c1.imaginario*c3.real;
    
    return e;
};

int main(){
    Complejo c1 = {6,4}, c2 = {4,-6}, c3 = {2}, c4 = {5,6};

    printf("El primer numero complejo es: "); imprimir(c1);
    printf("El segundo numero complejo es: "); imprimir(c2);
    printf("El tercer numero complejo es: "); imprimir(c4);

    printf("\nEl resultado del agregar el tercer numero complejo al primero es: "); imprimir(agrComp(c1,c4));
    printf("\nEl resultado del conjugado del primer numero complejo es: "); imprimir(conjComp(c1));
    printf("\nEl resultado de la suma de numeros complejos es: "); imprimir(sumaComp(c1,c2));
    printf("\nEl resultado de la multiplicacion de numeros complejos es: "); imprimir(multiComp(c1,c2));
    printf("\nEl resultado de la multiplicacion escalar del primer numero complejo es: "); imprimir(multiescComp(c1,c3));

    return 0;
};