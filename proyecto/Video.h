#include <iostream>
using namespace std;
#ifndef VIDEO_H
#define VIDEO_H

class Video{
    private:
        string tipo;
        string nombre;
        string genero;
        int lanzamiento;
        int duracion;
        int calificacion;

    public:
        Video();
        Video(string, string, string, int, int, int);

        string getTipo() const;
        string getNombre() const;
        string getGenero() const;
        int getLanzamiento() const;
        int getDuracion() const;
        int getCalificacion() const;
        
        void setTipo(string);
        void setNombre(string);
        void setGenero(string);
        void setLanzamiento(int);
        void setDuracion(int);
        void setCalificacion(int);
        int buscaCal();
        virtual void imprimeV();
        void califica(int nuevaCal); //vamos a escribir nuevas calificaciones según el usuario indique
        bool operator> (Video);
};

#endif //VIDEO_H