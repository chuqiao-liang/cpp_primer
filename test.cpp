#include <iostream>
#include <string>

using namespace std;

int main() {
    //3.2
    
    string line;
    string word;
    /*
    cout << "enter line: ";
    while (getline(cin, line)) {
        if (!line.empty()) {
            cout << line << endl;
        }
    }
    cout << "enter word: ";
    while (cin >> word) {
        cout << "good word!" << endl;
    }
    */
    //3.4
    /*
    string word2;
    while (cin >> word >> word2) {
    if (word == word2) {
        cout << "strings are equal" << endl;
    }
    else if (word > word2) {
        cout << word << " is bigger than " << word2 << endl;
    } else {
        cout << word2 << " is bigger than " << word << endl;
    }
    }
    */

    //3.5
    while (cin >>  word) {
        line += word;
        cout << line << endl;
    }

    return 0;
}
