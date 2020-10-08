//
// Created by Chris on 10/7/2020.
//

#include "Binario.h"

void Binario::leer(Person *_person) {
    ifstream archivo;
    try {
        archivo.open("ArchivoBinario.dat",ios::in | ios::binary);
    }
    catch (std::ifstream::failure a) {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo.read((char*)_person, sizeof(Person));
    archivo.close();
}

void Binario::escribir(Person *_person) {
    ofstream archivo;
    try {
        archivo.open("ArchivoBinario.dat",ios::app|ios::binary);
    }
    catch (std::ifstream::failure a) {
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo.write((char*)_person, sizeof(Person));
    archivo.close();
}