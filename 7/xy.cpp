#include <iostream>
#include <string>

using namespace std;

class Y;

class X {
    string n = "default_string";
    Y *ptr_y;
};

class Y {
    string n = "default_ystring";
    X objX;
};

int main() {
    return 0;
}
