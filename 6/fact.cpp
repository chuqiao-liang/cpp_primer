#include <iostream>
#include "Chapter6.h"

using namespace std;

int fact(int n) {
    int result = n;
    while (n > 1) {
        result *= (n-1);
        --n;
    }
    return result;
}
