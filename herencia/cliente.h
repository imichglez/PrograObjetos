// Ingrid González
// A01641116

#include <iostream>
using namespace std;
#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente{
    private:
        string nombre;
        string  ciudad;
        int cp;

    public: 
        Cliente();
        Cliente(string,string,int);

        string getNombre() const;
        string getCiudad() const;
        int getCp() const;

        void setNombre(string);
        void setCiudad(string);
        void setCp(int);

        void imprimeC();
};

#endif //CLIENTE_H