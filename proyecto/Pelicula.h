#include <iostream>
#include "Video.h"
using namespace std;
#ifndef PELICULA_H
#define PELICULA_H

class Pelicula: public Video{
    private:
        string actor;
    
    public:
        Pelicula();
        Pelicula(string, string, string, int, int, int, string);

        string getActor() const;
        void setActor(string);

        void imprimeV();
};

#endif //PELICULA_H