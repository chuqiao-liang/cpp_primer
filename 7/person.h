#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

struct Person;
istream &read(istream &, Person &);

struct Person {
    friend istream &read(istream &, Person &);
public:
    Person() = default;
    Person (const string &N, const string &A) : Name(N), Address(A) { } // constructor
    Person (istream &is) {
        read(is,*this);
    }
    string getName() const { return Name; }
    string getAddress() const { return Address;}
private:
    string Name;
    string Address;
};

istream &read(istream &, Person &);
ostream &read(ostream &, Person &);

#endif
