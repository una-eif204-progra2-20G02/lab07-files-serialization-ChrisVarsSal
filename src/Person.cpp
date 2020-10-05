//
// Created by Chris on 10/5/2020.
//

#include "Person.h"

Person::Person() {}

Person::Person(string _name, string _id, int _age)
         :name(_name),id(_id),age(_age){}

string Person::getName() {
    return name;
}

void Person::setName(string _name) {
    name=_name;
}

string Person::getId() {
    return id;
}

void Person::setId(string _id) {
    id=_id;
}

int Person::getAge() {
    return age;
}

void Person::setAge(int _age) {
    age=_age;
}

string Person::toString() {
    stringstream s;
    s<<"Name: "<<name<<endl
    <<"Id: "<<id<<endl
    <<"Age: "<<age<<endl;
    return s.str();
}