#include <iostream>
#include "Pelicula.h"
using namespace std;

Pelicula::Pelicula(){
    actor = "-";
}

Pelicula::Pelicula(string tipo, string nombre, string genero, int lanzamiento, int duracion, int calificacion, string actor): Video(tipo, nombre, genero, lanzamiento, duracion, calificacion){
    this -> actor = actor;
}

//getters
string Pelicula::getActor() const{
    return actor;
}

//setters
void Pelicula::setActor(string actor){
    this -> actor = actor;
}

void Pelicula::imprimeV(){
    Video::imprimeV();
    cout << "Actor principal: " << actor << endl << endl;
}
