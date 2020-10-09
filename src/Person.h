//
// Created by Chris on 10/5/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_CHRISVARSSAL_PERSON_H
#define LAB07_FILES_SERIALIZATION_CHRISVARSSAL_PERSON_H

#include <iostream>
#include <sstream>
#include <strings.h>
#include <vector>
using namespace std;

class Person {
private:
    char name[25];
    int id;
    int age;
public:
    Person();
    Person(string,int,int);
    const char *getName() const;
    int getId() const;
    void setId(int);
    int getAge() const;
    void setAge(int);

};


#endif //LAB07_FILES_SERIALIZATION_CHRISVARSSAL_PERSON_H
