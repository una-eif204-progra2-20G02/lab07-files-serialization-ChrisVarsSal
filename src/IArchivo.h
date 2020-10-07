//
// Created by Chris on 10/7/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_CHRISVARSSAL_IARCHIVO_H
#define LAB07_FILES_SERIALIZATION_CHRISVARSSAL_IARCHIVO_H


class IArchivo {
public:
    virtual ~IArchivo();
    virtual void leer()=0;
    virtual void escribir()=0;
};


#endif //LAB07_FILES_SERIALIZATION_CHRISVARSSAL_IARCHIVO_H
