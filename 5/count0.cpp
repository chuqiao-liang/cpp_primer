#include <iostream>

using namespace std;

int count () {
    static int c = -1;
    return c++;
}

int main() {
    for (int i = 0; i < 9; i++) {
        cout << count() << endl;
    }
    return 0;
}

