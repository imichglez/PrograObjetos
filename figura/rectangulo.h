// Ingrid González
// A01641116

#include <iostream>
#include "figura.h"
#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo: public Figura{
    private:
    int ancho;
    int largo;

    public:
    Rectangulo();
    Rectangulo(int,int,int,int);

    int getAncho() const;
    int getLargo() const;

    void setAncho(int);
    void setLargo(int);

    std::string dibuja() override;
    double area();
    
};

#endif //RECTANGULOL_H