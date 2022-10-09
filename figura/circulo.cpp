// Ingrid González
// A01641116

#include <iostream>
#include "circulo.h"


Circulo::Circulo(){
   radio = 1; 
};

Circulo::Circulo(int _x,int _y,int r):Figura(_x, _y){
    radio = r;
};

int Circulo::getRadio() const{
    return radio;
};

void Circulo::setRadio(int r){
    radio = r;
};

double Circulo::area(){
    return 3.1416*radio*radio;
};

std::string Circulo::dibuja(){  // se está sobrescribiendo el dibuja de los métodos de Figura
    return Figura::dibuja() + ": Circulo";
};