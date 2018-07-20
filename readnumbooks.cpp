#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Sales_item book;
    cin >> book;
    int count = 0;
    Sales_item trans;
    while (cin >> trans) {
    if (book.isbn() == trans.isbn()) {
        count++;
    } else {
        cout << book.isbn() << " has " << count + 1 << " copies!" << endl;
        trans = book;
    }
    }
    return 0;
}

