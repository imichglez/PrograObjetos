// Ingrid González
// A01641116

#include <iostream>
#include "cliente.h"
using namespace std;

Cliente::Cliente(){
    nombre = "default";
    ciudad = "default";
    cp = 0;
};

Cliente::Cliente(string nombre, string ciudad, int cp){
    this -> nombre = nombre;
    this -> ciudad = ciudad;
    this -> cp = cp;
};

string Cliente::getNombre() const{
    return nombre;
};

string Cliente::getCiudad() const{
    return ciudad;
};

int Cliente::getCp() const{
    return cp;
};

void Cliente::setNombre(string nombre){
    this -> nombre = nombre;
};

void Cliente::setCiudad(string ciudad){
    this -> ciudad = ciudad;
};

void Cliente::setCp(int cp){
    this -> cp = cp;
};

void Cliente::imprimeC(){
    cout << "Nombre: " << nombre << endl;
    cout << "Ciudad: " << ciudad << endl;
    cout << "CP: " << cp << endl;
};