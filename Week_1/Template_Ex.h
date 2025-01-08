#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <iostream>

/*
* A refresher example of basic templates, both in class and function
* form.
*/

template<class T>
class Person{
    T name;
public:
    T getName() const{
        return name;
    }

    void setName(T aName){
        name = aName;
    }

};

template <typename T, typename E>
void aPrintFunction(T argA, E argB){
    std::cout << "Our first argument is: " << argA << std::endl;
    std::cout << "Our second argument is: " << argB << std::endl;
}

template<typename T, typename E>
void swap(T& a, E& b) {
    T c;
    c = a;
    a = b;
    b = c;
}

#endif