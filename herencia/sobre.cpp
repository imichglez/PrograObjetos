// Ingrid González
// A01641116

#include <iostream>
#include "sobre.h"
using namespace std;

Sobre::Sobre(){
    lar = 0;
    anch = 0;
};

Sobre::Sobre(Cliente remitente, Cliente destinatario, int costo, int lar, int anch): Envio(remitente, destinatario, costo){
    this -> lar = lar;
    this -> anch = anch;
};

int Sobre::getLar() const{
    return lar;
};

int Sobre::getAnch() const{
    return anch;
};

void Sobre::setLar(int lar){
    this -> lar = lar;
};

void Sobre::setAnch(int anch){
    this -> anch = anch;
};

void Sobre::imprimeS(){
    cout << "\nSOBRE:\n";
    cout << "Largo: " << lar << " cm" << endl;
    cout << "Ancho: " << anch << " cm" << endl;
};

double Sobre::costCalc(){
    if (lar > 25 or anch > 30){
        cout << "\nSe agregará un cargo extra de $30 por sobrepaso de medidas del sobre" <<endl;
        cout << "Su total de envio es: $"<< Envio::calculaCosto()+5*180+30 << endl; //costo estandar + peso * costoKg + cargo extra
    }
    else{
        cout << "\nNo se le agregará un cargo extra por sobrepaso de medidas del sobre" <<endl;
        cout << "Su total de envio es: $" << Envio::calculaCosto()+5*180 <<endl; //costo estandar + peso * costoKg
    }
};