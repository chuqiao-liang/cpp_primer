#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main () {
    int ia[3][2] = {1,1,2,2,3,3};
    // range for
    size_t cnt = 0;
    for (auto &row:ia) {
        for (auto &c:row) {
            cout << c;
        }
        cout << endl;
    }
    cout << endl << endl;

    // subscript. this one's dumb
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << ia[i][j] << endl;
        }
    }
    
    cout << endl;

    // pointers
    for (auto i = ia; i < ia + 3; i++) {
        for (auto j = *i; j < *i + 2; j++) {
            cout << *j << endl;
        }
    }

    return 0;
}
