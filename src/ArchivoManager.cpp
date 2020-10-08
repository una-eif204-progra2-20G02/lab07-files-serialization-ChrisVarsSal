//
// Created by Chris on 10/7/2020.
//

#include "ArchivoManager.h"

void ArchivoManager::escribirArchivo(IArchivo *archivo) {
    Person* _person;
    archivo->escribir(_person);
}

void ArchivoManager::leerArchivo(IArchivo *archivo) {
    Person* _person;
    archivo->leer(_person);
}