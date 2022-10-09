#ifndef ARRAYVID_H
#define ARRAYVID_H
#include <iostream>
#include <vector> 
#include "Pelicula.h"
#include "Serie.h"
#include <fstream>

class ArrayVid{
    public:
        ArrayVid();
     // void agregaVideo(Video &);
        Video* operator[](int);
        int getSize();
        void cargaPeliculas();
        void cargaSeries();
        void verCatalogo();
        void imprimeSeries();
        void buscaCalificacion(int cal);
        void calificar();
        void compara();

    private:
        std::vector<Video*> videos; 
};

#endif //ARRAYVID_H