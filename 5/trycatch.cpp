#include <iostream>
#include <string>

using namespace std;

int main() {
    int first, second;
    try {
        cin >> first >> second;
        if (second == 0) throw runtime_error("can't divide a number by 0");
    } catch (runtime_error err) {
        cout << err.what() << "\nTry again" << endl;
        cin >> first >> second;
    }
    int result = first/second;
    cout << result << endl;

    return 0;
}
