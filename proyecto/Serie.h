#include <iostream>
#include "Video.h"
using namespace std;
#ifndef SERIE_H
#define SERIE_H

class Serie: public Video{
    private:
        string episodio;
    
    public:
        Serie();
        Serie(string, string, string, int, int, int, string);

        string getEpisodio() const;
        void setEpisodio(string);

        void imprimeV();
        friend std::ostream& operator<< (std::ostream &, const Serie&);
       // friend istream& operator>> (std:: istream &, Serie&);
};

#endif //SERIE_H