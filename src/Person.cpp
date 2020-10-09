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

const char *Person::getName() const {
    return name;
}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}
