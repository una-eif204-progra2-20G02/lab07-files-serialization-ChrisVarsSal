//
// Created by Chris on 10/7/2020.
//

#include "Texto.h"
 void Texto::leer(Person* _person) {
    ifstream archivo;
    try{
        archivo.open("ArchivoTextoLab7.txt",ios::in | ios::app);
    }
    catch (std::ifstream::failure a) {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo.read((char*)_person, sizeof(Person));
    archivo.close();
}

void Texto::escribir(Person *_person) {
    ofstream archivo;
    try {
        archivo.open("ArchivoTextoLab7.txt",ios::out | ios::app);
    }
    catch (std::ifstream::failure a) {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo.write((char*)_person, sizeof(Person));
    archivo.close();
}