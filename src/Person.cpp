//
// Created by Chris on 10/5/2020.
//

#include "Person.h"

Person::Person() {}

Person::Person(string _name, int _id, int _age) {
    strcpy(name,_name.c_str());
    id=_id;
    age=_age;
}