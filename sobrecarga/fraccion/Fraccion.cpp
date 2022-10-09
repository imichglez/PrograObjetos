// Ingrid González 
// A0164111

#include "Fraccion.h"

Fraccion::Fraccion(){
    num=0;
    den=1;
}

Fraccion::Fraccion(int n, int d){
    num=n;
    setDen(d);
}

int Fraccion::getNum() const{
    return num;
}

int Fraccion::getDen() const{
    return den;
}

void Fraccion::setNum(int n) {
    num=n;
    int mcdiv=mcd(num,den);
    num=num/mcdiv;
    den=den/mcdiv;
}

void Fraccion::setDen(int d) {
    if (d > 0){
        int mcdiv=mcd(num,d);
        num=num/mcdiv;
        den=d/mcdiv;
    } else {
        throw std::invalid_argument("Denominador no puede ser negativo ni 0");
    }
}

Fraccion Fraccion::operator + (const Fraccion& otra){
    int denNuevo = den * otra.den;
    int numNuevo = num *otra.den + den * otra.num; 
    return Fraccion(numNuevo, denNuevo);
}

// Sobrecarga de operador binario como función friend
Fraccion operator - (const Fraccion& uno, const Fraccion& dos){
    int denNuevo = uno.den * dos.den;
    int numNuevo = uno.num * dos.den - uno.den * dos.num; 
    return Fraccion(numNuevo, denNuevo);
}

// Sobrecarga de operador de flujo de salida
std::ostream &operator << (std::ostream & salida, const Fraccion& miFracc){
    salida << miFracc.num << "/" << miFracc.den; //fracción se vea num/den
    return salida;
}

// Sobrecarga de de operador de flujo de entrada
std::istream& operator >> (std::istream & entrada, Fraccion& miFracc){
    entrada >> miFracc.num >> miFracc.den;
    return entrada;
}

// Sobrecarga de operador unario ++ prefijo - preincremento
Fraccion Fraccion::operator ++ (){
    this -> setNum(++num);
    return *this; 
}

// Sobrecarga de operador unario ++ postfijo -postincremento
Fraccion Fraccion::operator ++ (int){
    Fraccion actual(num, den);
    this -> setNum(++num);
    return actual;
}

Fraccion Fraccion::operator -- (){
    this -> setNum(--num);
    return *this;
}

Fraccion Fraccion::operator -- (int){
    Fraccion actual(num, den);
    this -> setNum(--num);
    return *this;
}

// Sobrecarga del operador booleano > como funcion de la clase (función miembro)
bool Fraccion::operator > (const Fraccion& otra){
    return num * otra.den > otra.num * den;
}

bool Fraccion::operator==(const Fraccion& otra){
    return num == otra.num && den == otra.den;
}

//método privado de la clase para calcular minimo comun denominador
int Fraccion::mcd(int n, int d){
    int num1, num2, residuo;
    num1=abs(n);
    num2=abs(d);
    while (num2 > 0){
        residuo=num1 % num2;
        num1=num2;
        num2=residuo;
        
    }
    return num1;
}