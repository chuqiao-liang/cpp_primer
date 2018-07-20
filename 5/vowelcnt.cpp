#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string input;
    int blankspacetabcnt = 0;
    int vowelcnt  = 0;
    int fcnt = 0;
    getline(cin,input);
    for (string::iterator it = input.begin(); it != input.end(); it++) {
        switch (*it) {
            case 'a': case 'e': case 'i': case 'o': case 'u': 
                ++vowelcnt;
                break;
            case 'A': case 'E' : case 'I': case 'O' : case 'U':
                ++vowelcnt;
                break;
            case 'f':
                if ((*(it++) == 'f') || (*(it++) == 'l') || (*(it++) == 'i')) {
                    ++fcnt;
                }
                break;
            case '\t': case ' ': case '\n':
                ++blankspacetabcnt;
                break;
        }
    }

    cout << vowelcnt << endl;
    cout << fcnt << endl;
    cout << blankspacetabcnt << endl;

    return 0;
}
