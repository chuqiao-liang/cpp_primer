#include <iostream>

using namespace std;

int main() {
    /*
    int val, *p;
    val = 5;
    p = &val;
    cout << "*p is " << *p << endl;
    int *o;
    o = p;
    cout << "*o is " << *o << endl;
    *p = 80;
    cout << "*p is " << *p << " and val is " << val << endl;
    */

    int i = 42;
    int *pi = &i;
    *pi = *pi * *pi;
    cout << "*pi is " << *pi << endl;

    return 0;
}
