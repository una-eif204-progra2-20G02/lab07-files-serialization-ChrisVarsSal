//
// Created by Chris on 10/7/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_CHRISVARSSAL_BINARIO_H
#define LAB07_FILES_SERIALIZATION_CHRISVARSSAL_BINARIO_H

#include "IArchivo.h"
#include "Person.h"
#include <iostream>
#include <fstream>
using namespace std;

class Binario {
public:
    void leer(Person*);
    void escribir(Person*);
};


#endif //LAB07_FILES_SERIALIZATION_CHRISVARSSAL_BINARIO_H
