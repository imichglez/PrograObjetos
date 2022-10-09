// Ingrid González
// A01641116

#include <iostream>
#include "figura.h"
using namespace std;
#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo:public Figura{
    private:
    int radio;

    public:
    Circulo();
    Circulo(int,int,int);

    int getRadio() const;
    void setRadio(int);
    double area();
    string dibuja() override;
}; 

#endif //CIRCULO_H