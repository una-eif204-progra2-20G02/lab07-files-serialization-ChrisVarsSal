//
// Created by Chris on 10/5/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_CHRISVARSSAL_PERSON_H
#define LAB07_FILES_SERIALIZATION_CHRISVARSSAL_PERSON_H


class Person {
private:
    string name;
    string id;
    int age;
public:
    Person();
    Person(string,string,int);
    string getName();
    void setName(string);
    string getId();
    void setId(string);
    string getAge();
    void setAge(int);
};


#endif //LAB07_FILES_SERIALIZATION_CHRISVARSSAL_PERSON_H
