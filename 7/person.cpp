#include <iostream>
#include <string>
#include "person.h"

using namespace std;

/*
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
*/

istream &read(istream &is, Person &dude) {
    is >> dude.Name >> dude.Address;
    return is;
}

ostream &print(ostream &os, const Person &dude) {
    os << dude.getName() << " " << dude.getAddress();
    return os;
}

int main() {
    Person me(cin);
    print(cout, me) << endl;

    return 0;
}
