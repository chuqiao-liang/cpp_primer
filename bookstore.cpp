#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                cout << total << std::endl;
                total = trans;
            }
        }
        cout << total << endl;
    } else {
        cout << "no data..." << endl;
        return -1;
    }
    return 0;
}
