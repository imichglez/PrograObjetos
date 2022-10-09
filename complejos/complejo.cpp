// Ingrid González
// A01641116

#include <iostream>
#include "complejo.h"
using namespace std;

Complejo::Complejo(){
    real = 0;
    imaginario = 0;
};

Complejo::Complejo(double re, double im){
    real = re;
    imaginario = im;
};

double Complejo::getReal() const{
    return real;
};

double Complejo::getImaginario() const{
    return imaginario;
};

void Complejo::setReal(double re){
    real = re;
};

void Complejo::setImaginario(double im){
    imaginario = im;
};

void Complejo::agregar(Complejo c1){
    double r,i;
    r = c1.getReal();
    i = c1.getImaginario();

    real = real +r;
    imaginario = imaginario + i;
};

Complejo Complejo::conjugado(){
    double i;
    i = -1 * imaginario;
    return Complejo(real,i);
};

Complejo Complejo::suma(Complejo c1){
    double r, i, rsalida, isalida;
    r = c1.getReal();
    i = c1.getImaginario();

    rsalida = real + r;
    isalida = imaginario +i;

    return Complejo(rsalida,isalida);
};

Complejo Complejo::multi(Complejo c1){
    double r, i, rsalida, isalida;
    r = c1.getReal();
    i = c1.getImaginario();

    rsalida = (real * imaginario) - (r * i);
    isalida = (real * i) + (r * imaginario);

    return Complejo(rsalida,isalida);
};

Complejo Complejo::multiEscalar(double n){
    double r, i;
    r = real * n;
    i = imaginario * n;

    return Complejo(r,i);
};

void Complejo::imprime(){
    cout<< "(" <<real << "," <<imaginario << "i)" <<endl;
}; 