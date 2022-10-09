// Ingrid González
// A01641116

#include <iostream>
#include "envio.h"
using namespace std;

Envio::Envio(){
    costo = 0;
};

Envio::Envio(Cliente remitente, Cliente destinatario, int costo){
    this -> remitente = remitente;
    this -> destinatario = destinatario;
    this -> costo = costo; 
};

int Envio::getCosto() const{
    return costo;
};

void Envio::setCosto(int costo){
    this -> costo = costo;
};

double Envio::calculaCosto(){
    return costo;
};

void Envio::imprimeE(){
    cout << "REMITENTE \n";
    remitente.imprimeC();
    cout << "\nDESTINATARIO\n";
    destinatario.imprimeC();
};