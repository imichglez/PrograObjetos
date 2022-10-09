// Ingrid González
// A01641116
#ifndef SOBRE_H
#define SOBRE_H
#include <iostream>
#include "envio.h"
using namespace std;

class Sobre: public Envio{
    private:
        int lar;
        int anch;
        
    public:
        Sobre();
        Sobre(Cliente,Cliente,int,int,int);

        int getLar() const;
        int getAnch() const;

        void setLar(int);
        void setAnch(int);
        void imprimeS();

        double costCalc();
};

#endif //SOBRE_H