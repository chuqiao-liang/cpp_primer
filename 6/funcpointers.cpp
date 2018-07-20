#include <iostream>
#include <string>
#include <vector>

using namespace std;

int intfunc(int,int);
int foo(int,int);
int add(int,int);
int sub(int,int);
int multiply(int,int);
int divide(int,int);

int main() {
    typedef decltype(intfunc) *funcintptr;
    vector <funcintptr>vecfuncs;

    vecfuncs.push_back(intfunc);
    vecfuncs.push_back(foo);
    vecfuncs.push_back(add);

    vecfuncs[0](9,9); // call the functions within the vector!!
    vecfuncs[1](8,8);
    for (int i = 2; i < 3; ++i) {
        vecfuncs[i](2,5);
    }
    
    /*
       for (const auto &e:vecfuncs) {
       e(1,2);
       }
       */
    return 0;
}

int intfunc(int one, int two) {
    cout << "called intfunc, printing " << one << " " << two << endl;
    return 0;
}

int foo(int one, int two) {
    cout << "called foo, printing " << one << " " << two << endl;
    return 0;
}
int add(int one, int two) {
    cout << one*two << endl;
    return 0;
}
