#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <string> storage;
    string word;
    int count = 1;
    string stop = "s";
    cin >> word;
    string word2 = word;
    while (cin >> word && word != stop) {
        if (word2 == word) {
            ++count;
        } else {
            string st = word2 + " has been repeated " + to_string(count);
            storage.push_back(st);
            count = 1;
            word2 = word;
        }
    }
    storage.push_back(word2 + " has been repeated " + to_string(count));
    
    cout << endl;

    for (auto &s:storage) {
        cout << s << endl;
    }
    return 0;
}

