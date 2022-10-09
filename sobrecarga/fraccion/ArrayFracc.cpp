// Ingrid González 
// A0164111

#include "ArrayFracc.h"

ArrayFracc::ArrayFracc(){
}

void ArrayFracc::agregaFraccion(Fraccion &f1){
    fracciones.push_back(f1);
}

Fraccion &ArrayFracc::operator[](int index){
    if(index >= 0 && index < fracciones.size()){
        return fracciones[index];
    } else {
    return fracciones[0];
}
}