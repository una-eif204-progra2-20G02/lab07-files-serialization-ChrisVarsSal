//
// Created by Chris on 10/7/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_CHRISVARSSAL_ARCHIVOMANAGER_H
#define LAB07_FILES_SERIALIZATION_CHRISVARSSAL_ARCHIVOMANAGER_H

#include "IArchivo.h"

class ArchivoManager {
public:
    void leerArchivo(IArchivo*);
    void escribirArchivo(IArchivo*);
};


#endif //LAB07_FILES_SERIALIZATION_CHRISVARSSAL_ARCHIVOMANAGER_H
