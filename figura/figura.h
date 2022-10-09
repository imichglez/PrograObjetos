// Ingrid González
// A01641116

#include <iostream>
#ifndef FIGURA_H
#define FIGURA_H

class Figura{
    private:
    int x,y;

    public:
    Figura();
    Figura(int,int);

    int getX() const;
    int getY() const;

    void setX(int);
    void setY(int);

    virtual std::string dibuja();
};

#endif //FIGURA_H