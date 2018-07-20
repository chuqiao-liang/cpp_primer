#include <iostream>

using namespace std;

int main() {
    int val = 0;
    int sum = 0;
    while (val <=10) sum += val,++val;
    cout << val;
    return 0;
}
