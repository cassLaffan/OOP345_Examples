#ifndef PERSON_H
#define PERSON_H

/*
* Let's refresh ourselves on how inheritance works! The
* syntax is necessary for understanding the syntax for
* polymorphism.
*/

#include <iostream>
#include <time.h>
#include <string>

class Person {
protected:
    std::string name;
    // long int is just a BIG number (SIN is a long number, after all)
    long int SIN;
    // a numeric value holding the number of seconds since 00:00, Jan 1 1970 UT
    time_t DOB;
public:
    Person();
    Person(std::string, long int, time_t);
    Person(const Person&);

    ~Person(); // Not necessary given there's no dynamic data BUT it's for demonstration

    std::string getName() const;
    long int getSIN() const;
    time_t getDOB() const;

    void setName(std::string);
    void setSIN(long int);
    void setDOB(time_t);

    void display(std::ostream&) const;
};

#endif