// Ingrid González 
// A01641116

//Realiza el main para probar todos los operadores
#include "ArrayFracc.h"
#include "Fraccion.h"
#include <fstream>
#include <iostream>

void cargaDatos(ArrayFracc& misFracciones){
  int num, den;
  std::ifstream archivo;
  archivo.open("fracciones.txt");
  if (archivo.is_open()) {
    while (archivo >> num) {
      archivo >> den;
      Fraccion temp(num, den);
      misFracciones.agregaFraccion(temp);
      std::cout << temp << std::endl;
    }
  }
  archivo.close();
}
//Puedes crear más funciones si las requieres...

//Llena la función principal para hacer todas tus pruebas
int main() {
  Fraccion f1;
  std::cout << "----- FRACCIÓN 1 -----\n";
  std::cout << "Ingresa el numerador y denominador: ";
  std::cin >> f1;
  std::cout << "La fraccción es: " << f1 << std::endl;

  Fraccion f2;
  std::cout << "\n----- FRACCIÓN 2 -----\n";
  std::cout << "Ingresa el numerador y denominador: ";
  std::cin >> f2;
  std::cout << "La fracción es: " << f2 << std::endl;

  int op;
  std::cout << "\n----- MENU FRACCIONES -----" << std::endl;
  std::cout << "1. Suma de fracciones" << std::endl;
  std::cout << "2. Resta de fracciones" << std::endl;
  std::cout << "3. Fracción ayor o menor que" << std::endl; 
  std::cout << "4. Fracción igual o diferente" << std::endl; 
  std::cout << "\nElige una opcion: " << std::endl;
  std::cin >> op; 

  
  ArrayFracc listaFracciones;
  cargaDatos(listaFracciones);

  switch(op){
    case 0:
      break;

    case 1: //opción de suma
      std::cout << "Suma de f1 y f2: " << (f1 + f2) << std::endl;
      break;

    case 2: //opción resta
      std::cout << "Resta de f1 y f2: " << (f1 - f2) << std::endl;
      break;
    
    case 3: //mayor o menor que
      if (f1 > f2) {
        std::cout << "La fracción 1 es mayor a la fracción 2\n";
      } else {
      std::cout << "La fracción 1 no es mayor a la fracción 2\n";
      }

    case 4: // igual o dif
      if (f1 == f2) {
        std::cout << "Las fracciones son iguales";
      } else{
      std::cout << "Las fracciones no son iguales";
      }                
  };
  
  return 0;
}