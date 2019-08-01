#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <string>

class Person {
    std::string name;
    public:
    Person(std::string name): name(name) {

    }

    std::string print() ;
};


#endif