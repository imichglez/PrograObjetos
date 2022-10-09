// Ingrid González
// A01641116

#include <iostream>
#include "rectangulo.h"

Rectangulo::Rectangulo(){
    ancho = 2;
    largo = 3;
};

Rectangulo::Rectangulo(int _a, int _l, int _x, int _y):Figura(_x, _y){
    ancho = _a;
    largo = _l;
};

int Rectangulo::getAncho() const{
    return ancho;
};

int Rectangulo::getLargo() const{
    return largo;
};

void Rectangulo::setAncho(int _a){
    ancho = _a;
};

void Rectangulo::setLargo(int _l){
    largo = _l;
};

double Rectangulo::area(){
    return largo*ancho;
};

std::string Rectangulo::dibuja(){
    return Figura::dibuja() + ": Rectangulo";
};