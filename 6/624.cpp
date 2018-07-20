#include <iostream>
#include <string>
#include <array>

using namespace std;

int whichbigger(const int n, const int* m) {
    if (n > (*m)) {
        return n;
    } else return *m;
}

void swappointers(int *&n, int *&m) {
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

void print(const int* x) {
    if (x)
        while (*x)
            cout << *x++ << endl;
}

void print1(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg << endl;
        beg++;
    }
}

int main() {
    int x = 1, y = 4;
    int * xptr = &x;
    int * yptr = &y;
    int c = whichbigger(x, &y);
    /*
    cout << c << " is bigger" << endl;

    swappointers(xptr,yptr);
    cout << "x is now " << x << endl;
    cout << "y is now " << y << endl;
    */

    int j[3] = {0,1,2};
    print1(begin(j),end(j));
    return 0;
}

