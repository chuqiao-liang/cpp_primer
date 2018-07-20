#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

void printerrors(initializer_list<string> list) {
    for (auto b = list.begin(); b != list.end(); b++) {
        cout << *b << endl;
    }
}

int main() {
    string first = "bad stuff";
    string second = "warning";
    string third = "please don't";
    cout << "enter number 1 or 2" << endl;
    int num;
    cin >> num;
    if (num == 1) {
        printerrors({first,second,third});
    } else {
        printerrors({first});
    }
    return 0;
}
