// Ingrid González 
// A01641116

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Paquete.h"
#include "Sobre.h"

int main() {
    //1. Crea un vector de apuntadores a Envio, llámalo listaEnvios
    vector <Envio*>listaEnvios;
    string nombreR, ciudadR, cpR;
    string nombreD, ciudadD, cpD;
    double peso, largo, ancho, profundidad;
    char tipoEnvio;
    ifstream archivo;
    archivo.open("datosEnvio.txt");
    if (archivo.is_open()){
        while (archivo >> tipoEnvio) {
            if (tipoEnvio == 'p' ) {
                archivo >> nombreR >> ciudadR >> cpR >> nombreD >> ciudadD 
                >> cpD >> peso >> ancho >> largo >> profundidad;

                // 2. Crea dos objetos Persona una para el remitente y otra para el destinatario
                Persona r1("Manuel Ponce", "Zapopan", "45290");
                Persona d1("Michelle Torres", "Cancun", "27650");

                // 3. Agrega un nuevo paquete al vector
                listaEnvios.push_back(new Paquete(r1,d1,peso,ancho,largo,profundidad));
            }else {// si no fue p es una s entonces corresponde a un sobre
            
                // 4. Lee el resto de los datos del renglón, guárdalos en las variables que ya están declaradas
                archivo >> nombreR >> ciudadR >> cpR >> nombreD >> ciudadD >> cpD >> peso >> ancho >> largo >> profundidad;

                // 5. Crea dos objetos Persona uno para el remitente y otro para el destinatario
                Persona r2("Manuel Ponce", "Zapopan", "45290");
                Persona d2("Michelle Torres", "Cancun", "27650");

                // 6. Agrega un nuevo sobre al vector    
                listaEnvios.push_back(new Sobre(r2,d2,ancho,largo));       
            }
        }
        archivo.close();
        double totalEnvios = 0;
        // Una vez cargado el vector de Envios con los datos del archivo
        // Y creados los objetos dinámicamente en el vector, lo recorremos
        for (int i=0; i<listaEnvios.size();i++) {
            cout << "---------- " << "Inician Datos de Envio: " << i+1 << " ----------" << endl;
            //7. Manda a imprimir el Envio, usa el método imprime que debe ser polimórfico
            listaEnvios[i] -> imprime();

            //8. Acumula en totalEnvios el costo del Envio, usa el método calculaCosto que debe ser polimórfico
            totalEnvios += listaEnvios[i] ->calculaCosto();
            cout << "\n---------- " << "Termina Datos de Envio: " << i+1 << " ----------\n" << endl;
        }
        cout << "\tTOTAL DE LOS ENVIOS: $" << totalEnvios << endl;
    }else{
        cout << "El archivo no se puede abrir" << endl;
    }
    return 0;
}