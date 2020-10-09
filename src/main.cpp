//
// Created by Chris on 10/8/2020.
//

#include "Binario.h"
#include "Texto.h"
#include "Person.h"
#include <../lib/nlohmann/json.hpp>
#include <fstream>
using namespace std;
using json = nlohmann::json;

int main(){
    Person* person1 = new Person("Chris",1111,19);
    Person* person2 = new Person("Alexis",2222,20);
    Person* person3 = new Person("Sofia",3333,21);
    Person* person4 = new Person("Mariana",4444,22);
    Person* person5 = new Person("Mau",5555,23);
    Person* person6 = new Person("Manuel",6666,24);
    Person* person7 = new Person("Michi",7777,25);
    Person* person8 = new Person("Solano",8888,26);

    Texto texto;
    /*Escritura*/
    texto.escribir(person1);
    texto.escribir(person2);

    /*Lectura*/
    texto.leer(person5);
    texto.leer(person6);

    Binario binario;
    /*Escritura*/
    binario.escribir(person3);
    binario.escribir(person4);

    /*Lectura*/
    binario.leer(person7);
    binario.leer(person8);

    Person per1 = {"Nacho",9999,27};
    Person per2 = {"Nay",1010,28};
    Person per3 = {"Mohamed",1212,29};

    /*Serializacion*/
    json jsonPerson;
    jsonPerson["Persons"]={
            {"Person 1: ",per1.getName(),per1.getId(),per1.getAge()},
            {"Person 2: ",per2.getName(),per2.getId(),per2.getAge()},
            {"Person 3: ",per3.getName(),per3.getId(),per3.getAge()}
    };
    string personSerializable = jsonPerson.dump();


    return 0;
}

