#include "ArrayVid.h"

ArrayVid::ArrayVid(){
}

int ArrayVid::getSize(){
    return videos.size();
}

Video* ArrayVid::operator[](int index){
    if (index>=0 && index<videos.size()){
        return videos[index];
    } 
    return videos[0];
}

void ArrayVid::cargaPeliculas(){  
    string tipo;
    string nombre;
    string genero;
    int lanzamiento;
    int duracion;
    int calificacion;
    int x;  
    string miActor; 
    fstream archivo;
    archivo.open("archivoPeliculas.txt");
    if (archivo.is_open()){
        while (archivo >> x) {
            archivo >> tipo >> nombre >> genero >>lanzamiento >> duracion >> calificacion >> miActor ;
            videos.push_back(new Pelicula(tipo, nombre, genero, lanzamiento, duracion, calificacion, miActor));
        }
    }
    archivo.close();
}

void ArrayVid::cargaSeries(){  
    string tipo;
    string nombre;
    string genero;
    int lanzamiento;
    int duracion;
    int calificacion;
    int x;  
    string miEp; 
    fstream archivo;
    archivo.open("archivoSeries.txt");
    if (archivo.is_open()){
        while (archivo >> x) {
            archivo >> tipo >> nombre >> genero >>lanzamiento >> duracion >> calificacion >> miEp ;
            videos.push_back(new Serie(tipo, nombre, genero, lanzamiento, duracion, calificacion, miEp));
        }
    }
    archivo.close();
}

void ArrayVid::verCatalogo(){
    int i=0;
    cout << endl;
    cout << "----- LISTA DE VIDEOS -----" << endl;
    while(i < videos.size()){
        videos[i]->imprimeV();
        i++;
    }
}

void ArrayVid::imprimeSeries(){
    int i=0;
    cout<<"----- INFORMACION SERIES -----" << endl;
    while(i < videos.size()){
        if(videos[i]->getTipo() == "Serie"){
            videos[i]->imprimeV();
        }
        i++;
    }
}

void ArrayVid::buscaCalificacion(int cal){
    int i=0;
    cout << endl << "Info de los videos con el puntaje " << cal << ":" << endl;
    int b;
    b=1;
    while(i < videos.size()){
        if(videos[i]->getTipo() == "Pelicula"){
            if (videos[i]->buscaCal()==cal){
                videos[i]->imprimeV();
                b=0;
            }
        }
        i++;
    }
    if(b==1){
        cout << endl << "No existen Películas con esa calificación." << endl;
    }
}

void ArrayVid::calificar(){
    int i=0;
    int opcion;
    int nuevaCal;
    cout << "----- CALIFICAR VIDEO -----" << endl;
    cout << endl << "Lista de videos:" << endl << endl;
    while(true){
        while(i < videos.size()){
            cout << i+1 << ") " << videos[i]->getNombre() 
            << endl << "Calificación actual: " << videos[i]->buscaCal() << endl;
            i++;
        }
        cout << endl << "Ingrese el número de video que desea calificar: ";
        cin >> opcion;
        try{
            if(opcion>videos.size() || opcion <= 0){
                throw "El número está fuera de rango";
            }
            cout << endl << "Información del video seleccionado: " << endl;
            videos[opcion-1]->imprimeV();
            cout << endl;
            cout << "Ingrese la nueva Calificación" << endl;
            cin >> nuevaCal;
            videos[opcion-1]->califica(nuevaCal);
            break;
        }
        catch(const char *msg){
            cout << endl;
            cerr << msg << endl;
            cout << "Ingrese un número válido. " << endl;
        }   
    }
}

 void ArrayVid::compara(){
    int primero, segundo;
    cout << "Elige dos Videos de la lista: " << endl << endl;
    for(int j=0; j<videos.size();j++){
        cout << j+1 << ") " << videos[j]->getNombre() << endl;
    }
    cout << endl << "Primer video: ";
    cin >> primero;
    cout << endl << "Segundo Video: ";
    cin >> segundo; 
    if(videos[primero-1]>videos[segundo-1]){
        cout << "El Video " << videos[primero-1]->getNombre() << " tiene calificación mayor, te recomendamos ese." << endl;
    }    
    else{
        cout << "El Video " <<videos[segundo-1]->getNombre() << " tiene calificación mayor, te recomendamos ese." << endl;
    }
}