#include <iostream>     
#include <fstream>
#include "ArrayVid.h"
using namespace std;


int main(){
    ArrayVid catalogo;
    int i = 0, nuevaCal = 1, opc2 = 0, cal, op;
    bool repetir = true;
    catalogo.cargaPeliculas();
    catalogo.cargaSeries();

    do{
        cout << endl;
        cout << "----- MENU -----" << endl;
        cout << "\n1. Lista de videos"
        "\n2. Información series"
        "\n3. Información peliculas basada en calificación"
        "\n4. Calificar un video"
        "\n5. Recomendación"
        "\n6. Salir" << endl;
        cout << "Elige una opción: ";
        cin >> op;
        switch (op){
            case 1:
                cout << endl;
                catalogo.verCatalogo();                
                break; 
            case 2:
                cout << endl;
                catalogo.imprimeSeries();
                break;
            case 3:
            cout << endl;
            cout << "---- BUSCAR PELÍCULAS POR CALIFICACIÓN ----" << endl;
            cout<< endl << "Ingrese una calificación para realizar un filtro de búsqueda: "<< endl;
            cin >> cal;
            catalogo.buscaCalificacion(cal);
                break;
            case 4:
            cout << endl;
            catalogo.calificar();
                break; 
            case 5:
            cout << endl;
            catalogo.compara();
                break;
            case 6:
                cout << "Vuelve pronto" << endl;
                repetir = false;
                break;      
        }
    } while(repetir);
    return 0;
};