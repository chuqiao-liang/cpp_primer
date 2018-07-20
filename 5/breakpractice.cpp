#include <iostream>
#include <string>

using namespace std;

int main() {
    string word, word2;
    while (cin >> word) {
        if (word[0] < 'A' || word[0] > 'Z') {
            word2 = word;
            continue;
        }
        if (word == word2) {
            break;
        }
        word2 = word;
    }
    if (word2 == word) {
        cout << word << " was printed twice " << endl;
    }else {
        cout << "nothing was repeated" << endl;
        return 0;
    }
}
