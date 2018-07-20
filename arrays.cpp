#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    /*
       vector <int> v =  {1,2,3,4,5,6,7,8,9,10};
       for (auto i = v.begin(); i < v.end(); i++) {
       (*i) = (*i)*2;
       cout << *i << " ";
       }
       for (int i = 0; i < v.size(); i++) {
       cout << v.at(i);
       }
       */

    // int numa[9] = {1,2,3,4,5,6,7,8,9}; // c-style array, don't use
    // int second[9] = ; // c-style array, don't use
    array <int, 9> numa {1,2,3,4,5,6,7,8,9};
    array <int, 9> second {1,4,6,8,5,12,14,16,18};
    vector <int> myvec(begin(numa),end(numa));
    for (const auto &p:myvec) {
        cout << p << endl;
    }
    /*
       if (numa == second) {
       cout << "same" << endl;
       } else {
       cout << "not same" << endl;
       }

       /
       int *p = begin(numa), *pe = end(numa);
       while (p != pe) {
     *p = 0;
     p++;
     }
     auto sizenuma = sizeof(numa)/sizeof(numa[0]);
     auto sizesecond = sizeof(second)/sizeof(second[0]);
     int *p = begin(numa), *pe = end(numa);
     int *z = begin(second), *ze = end(second);
     if (sizenuma != sizesecond) {
     cout << "unequal lengths" << endl;
     } else {
     cout <<"equal lengths" << endl;
     for (int i = 0; i < sizenuma; i++) {
     if (sizenuma[i] == second[i]) {
     cout << "same" << endl;
     } else {
     cout << "not same" << endl;
     }
     }
     }
     */
}

