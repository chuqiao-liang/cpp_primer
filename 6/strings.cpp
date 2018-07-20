#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

bool compare(const matrix&,const matrix&); //6.18
vector<int>::iterator change_val(int,vector<int>::iterator &);


bool capital(const string s) {
    for (int i = 0; i < s.length();i++)
    {
        if (s[i] > 'A' && s[i] < 'Z') {
            return true;
        }
    }
    return false;
}

void changelower(string &s) {
    for (auto &l:s) {
        if (l <= 'A' || l >= 'Z') {
            l -= 32;
        }
    }
}

int main() {
    string mine("Mine");
    string secstring = "HelLLLolllllooooo";
    cout << capital(mine) << endl;
    changelower(secstring);
    cout <<  secstring << endl;

    return 0;
}

