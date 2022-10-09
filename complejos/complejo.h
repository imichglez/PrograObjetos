// Ingrid González
// A01641116

#include <iostream>
using namespace std;
#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo{
    private:
        double real;
        double imaginario;

    public:
        Complejo();
        Complejo(double,double);

        double getReal() const;
        double getImaginario() const;

        void setReal(double);
        void setImaginario(double);

        void agregar(Complejo);
        Complejo conjugado();
        Complejo suma(Complejo);
        Complejo multi(Complejo);
        Complejo multiEscalar(double);
        void imprime();
};

#endif //COMPLEJO_H