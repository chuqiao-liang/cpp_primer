#include <iostream>

using namespace std;

void swap(int &one, int &two) {
    int temp = one;
    one = two;
    two = temp;
}

void reset (int &num) {
    num = 0;
}

int main() {
    int n = 1, m = 3;
    swap(n,m);
    cout << "n is now " << n << endl;
    cout << "m is now " << m << endl;
    reset(n);
    cout << "n is now " << n << endl;

    return 0;
}



