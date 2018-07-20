#include <iostream>
#include <vector>

using namespace std;

void adjacent(vector <int> &v) {
    for (int i = 0; i < v.size()-1; i++) {
        cout << v.at(i) + v.at(i+1);
    } 
    cout << endl;
}

void symmetric(vector <int> &v) {
    auto mid = (v.size() + 1) / 2;
    for (decltype(mid) i = 0; i < mid; i++) {
        cout << v.at(i) + v.at(v.size() - 1 - i);
    }
    cout << endl;
}

int main() {
    vector<int> vecnum;
    int num;
    while(cin >> num) {
        vecnum.push_back(num);
    }

    adjacent(vecnum);
    symmetric(vecnum);

    return 0;
}
