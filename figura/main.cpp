// Ingrid González
// A01641116

#include <iostream>
#include "circulo.h"
#include "rectangulo.h"
using namespace std;

void intercambia(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout << "Dentro de intercambia X: " << x << " - " << y <<endl;
}; 

int* ejemplo(){
    static int x = 88;
    int* ptrInt = &x;
    return ptrInt; 
};

int main(){
    Figura* ptrFig = new Circulo(5,6,7);
    cout << ptrFig->dibuja() <<endl;
    Figura *arr[5];
    arr[0] = new Circulo(1,1,5);
    arr[1] = new Rectangulo(0,0,3,5);
    arr[2] = new Circulo(1,1,5);
    arr[3] = new Figura(1,1);
    arr[4] = new Circulo(1,1,5);
    arr[5] = new Rectangulo(1,1,4,2);
    for (int i=0; i<5; i++){
        cout << arr[i]->dibuja() <<endl;
    };

    
    /*
    int y = 5;
    int& x = y;
    cout << "X: " << x << " Y: " << y << endl;
    cout << "Direccion de memoria: " << &x << " - " << &y << endl;
    int z = 9;

    intercambia(x,z);
    cout << "X: " << x << " Z: " << z << endl;

    // apuntadores
    int* ptrInt;
    ptrInt = &z;
    cout << "Direccion de memoria: "<< ptrInt << endl;
    cout << "Valor al que apunta: " << *ptrInt << endl;
    int* ptrInt2 = new int(67); // se crea de manera dinámica
    cout << "Direccion de memoria: "<< ptrInt2 << endl;
    cout << "Valor al que apunta: " << *ptrInt2 << endl;

    Circulo c1(2,3,4);
    Circulo* ptrC1 = &c1;
    cout << c1.dibuja() << endl;
    cout << ptrC1->dibuja() << endl;

    Circulo* ptrC2 = new Circulo(5,6,7); // objetos dinámicos
    cout << ptrC2->dibuja() << " X: " << ptrC2->getX() << endl;
    */


    /*
    Figura f1;
    cout << "FIGURA" <<endl;
    cout << f1.dibuja() <<endl;

    Circulo c1(1,1,2);
    cout << "CIRCULO"<<endl;
    cout << c1.dibuja() <<endl;
    cout << "El area es: " << c1.area() <<endl;

    Rectangulo r1(1,1,2,3);
    cout << "RECTANGULO" <<endl;
    cout << r1.dibuja() <<endl;
    cout << "El area es: " << r1.area() <<endl;
    
    return 0;
    */
};