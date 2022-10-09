#include <iostream>
#include "Serie.h"
using namespace std;

Serie::Serie(){
    episodio = "-";
}

Serie::Serie(string tipo, string nombre, string genero, int lanzamiento, int duracion, int calificacion, string episodio): Video(tipo, nombre, genero, lanzamiento, duracion, calificacion){
    this -> episodio = episodio;
}

//getters
string Serie::getEpisodio() const{
    return episodio;
}

//setters
void Serie::setEpisodio(string episodio){
    this -> episodio = episodio;
}

void Serie::imprimeV() {
    Video::imprimeV();
    cout << "Descripcion: " << episodio << endl << endl;
}

