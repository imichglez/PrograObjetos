#include <cmath>
#include "CoordRect.h"
CoordRect::CoordRect(){
    x=0;
    y=0;
}
CoordRect::CoordRect(double xx, double yy){
    x=xx;
    y=yy;
}
double CoordRect::getX() const{
    return x;
}
double CoordRect::getY() const{
    return y;
}
void CoordRect::setX(double xx){
    x=xx;
}
void CoordRect::setY(double yy){
    y=yy;
}

CoordRect CoordRect::operator +(const CoordRect& otra){
    return CoordRect(this->x + otra.x,this->y + otra.y);
}

ostream &operator <<(ostream& salida, const CoordRect& cr1){
    salida << "(" << cr1.x << "," << cr1.y << ")";
    return salida;
}

CoordRect CoordRect::operator +(const CoordPolar& polar){
    double xx = polar.getR()*sin(polar.getAngulo()*M_PI/180);
    double yy = polar.getR()*cos(polar.getAngulo()*M_PI/180);
    
    return CoordRect(this->x + (xx), this->y + (yy));
}