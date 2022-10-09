#include <iostream>
#include "Video.h"
using namespace std;

Video::Video(){
    tipo = "-";
    nombre = "-";
    genero = "-";
    lanzamiento = 0;
    duracion = 0;
    calificacion = 0;
}

Video::Video(string tipo, string nombre, string genero, int lanzamiento, int duracion, int calificacion){
    this -> tipo = tipo;
    this -> nombre = nombre;
    this -> genero = genero;
    this -> lanzamiento = lanzamiento;
    this -> duracion = duracion;
    this -> calificacion = calificacion;
}
//getters
string Video::getTipo() const{
    return tipo;
}

string Video::getNombre() const{
    return nombre;
}

string Video::getGenero() const{
    return genero;
}

int Video::getLanzamiento() const{
    return lanzamiento;
}

int Video::getDuracion() const{
    return duracion;
}

int Video::getCalificacion() const{
    return calificacion;
}

//setters
void Video::setTipo(string tipo){
    this -> tipo = tipo;
}

void Video::setNombre(string nombre){
    this -> nombre = nombre;
}

void Video::setGenero(string genero){
    this -> genero = genero;
}
void Video::setLanzamiento(int lanzamiento){
    this -> lanzamiento = lanzamiento;
}

void Video::setDuracion(int duracion){
    this -> duracion = duracion;
}

void Video::setCalificacion(int calificacion){
    this -> calificacion = calificacion;
}

int Video::buscaCal(){
  return calificacion;
}

void Video::califica(int nuevaCal){ //nueva calificación que se le otorge según el usuario
    calificacion = nuevaCal;
}

void Video::imprimeV(){
    cout << endl << "Tipo: " << tipo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Genero: " << genero << endl;
    cout << "Lanzamiento: " << lanzamiento << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Calificacion: " << calificacion <<endl;
}

bool Video::operator> (Video uno){
    return calificacion>uno.getCalificacion();
}