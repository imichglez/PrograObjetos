// Ingrid González
// A01641116

#include <iostream>
#include "envio.h"
using namespace std;
#ifndef PAQUETE_H
#define PAQUETE_H

class Paquete: public Envio {
    private:
        int largo;
        int ancho;
        int profundo;
        int peso;
        int costoKg;

    public:
        Paquete();
        Paquete(Cliente,Cliente,int,int,int,int,int,int);

        int getLargo() const;
        int getAncho() const;
        int getProfundo() const;
        int getPeso() const;
        int getCostoKg() const;

        void setLargo(int);
        void setAncho(int);
        void setProfundo(int);
        void setPeso(int);
        void setCostoKg(int);
        
        void imprimeP();
        double costCalc();
};

#endif //PAQUETE_H