//
// Created by Chris on 10/7/2020.
//

#include "ArchivoManager.h"

void ArchivoManager::escribirArchivo(IArchivo *archivo) {
    archivo->escribir();
}

void ArchivoManager::leerArchivo(IArchivo *archivo) {
    archivo->leer();
}