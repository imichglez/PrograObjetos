#include <iostream>
#include "CoordRect.h"
#include "CoordPolar.h"
using namespace std;

int main(){
    CoordRect c1(2,3);
    CoordRect c2(4,7);
    CoordRect suma=c1+c2;
    cout << suma << endl;
    return 0;
}