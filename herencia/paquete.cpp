// Ingrid González
// A01641116

#include <iostream>
#include "paquete.h"
using namespace std;

Paquete::Paquete(){
    int largo = 0;
    int ancho = 0;
    int profundo = 0;
    int peso = 0;
    int costoKg = 0;
};

Paquete::Paquete(Cliente remitente, Cliente destinatario, int costo, int largo, int ancho, int profundo, int peso, int costoKg): Envio(remitente,destinatario,costo){
    this -> largo = largo;
    this -> ancho = ancho;
    this -> profundo = profundo;
    this -> peso = peso;
    this -> costoKg = costoKg;
};

int Paquete::getLargo() const{
    return largo;
};

int Paquete::getAncho() const{
    return ancho;
};

int Paquete::getProfundo() const{
    return profundo;
};

int Paquete::getPeso() const{
    return peso;
};

int Paquete::getCostoKg() const{
    return costoKg;
};

void Paquete::setLargo(int largo){
    this -> largo = largo;
};

void Paquete::setAncho(int ancho){
    this -> ancho = ancho;
};

void Paquete::setProfundo(int profundo){
    this -> profundo = profundo;
};

void Paquete::setPeso(int peso){
    this -> peso = peso;
};

void Paquete::setCostoKg(int costoKg){
    this -> costoKg = costoKg;
};

double Paquete::costCalc(){
    return Envio::calculaCosto() * costoKg;
};

void Paquete::imprimeP(){
    cout << "\nPAQUETE\n";
    cout << "Largo: " << largo << " cm" << endl;
    cout << "Ancho: " << ancho << " cm" << endl;
    cout << "Profundidad: " << profundo << " cm" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Costo por Kg: $" << costoKg << endl;
};