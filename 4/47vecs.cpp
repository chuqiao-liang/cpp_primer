#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    /*
    vector <int> vecints = {1,2,3,4,5,6,7,8,9,10};
    for (auto &i:vecints) {
        cout << ((i%2 == 0) ? i : i*2) << " ";
        cout << endl;
    }
    */
    string s = "word";
    string p1 = s + ((s[s.size()-1]) == 's' ? "" : "s");
    cout << p1;

}

