// Ingrid González
// A01641116

#ifndef ENVIO_H
#define ENVIO_H
#include <iostream>
#include "cliente.h"
using namespace std;

class Envio{
  private:
    Cliente remitente;
    Cliente destinatario;
    int costo;

  public:
    Envio();
    Envio(Cliente, Cliente, int);

    int getCosto() const;
    void setCosto(int);

    void imprimeE();
    double calculaCosto();
};

#endif //ENVIO_H