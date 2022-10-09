// Ingrid González
// A01641116

#include <iostream>
#include "envio.h"
#include "cliente.h"
#include "paquete.h"
#include "sobre.h"
using namespace std;

int main(){
    Cliente c1("Juan Castillo","Guadalajara",44560);
    Cliente r1("Claudia Mendoza", "Mexicali", 21020);
    Envio e1(c1,r1,80);
    // imprime los datos del remitente y destinatario
    // e1.imprimeE();

    Paquete p1(c1,r1,30,50,25,10,5,180);
    p1.imprimeP();

    Sobre s1(c1,r1,30,30,25);
    s1.imprimeS();

    // caso prueba
    // el paquete tiene un costo estandar de $30 y se agrega un cargo extra de $30 si sobrepasa las medidas propuestas
    Sobre s2(c1,r1,30,30,25); // imprime si se le agrega un costo extra al envío 
    s2.costCalc();
    return 0;
};