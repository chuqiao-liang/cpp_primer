#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen;

class Window_mgr {
public:
    typedef vector<Screen>::size_type index;
    void clear(index);
private:
    vector<Screen> screens;
};

class Screen {
    friend void Window_mgr::clear(index);
public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd,' ') { }
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd,c) { }
    Screen set(char c) {
        contents[cursor] = c;
        return *this;
    }
    Screen set(pos row, pos column, char c) {
        int index = row*width + column;
        contents[index] = c;
        return *this;
    }
    Screen display(ostream &os) {
        do_display(os);
        return *this;
    }
    const Screen display (ostream &os) const {
        do_display(os);
        return *this;
    }
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen move(pos r, pos c);
private:
    void do_display (ostream &os) const {
        os << contents;
    }
    pos cursor = 0;
    pos height, width = 0;
    string contents;
};

void Window_mgr::clear(index i) {
    Screen &s = screens[i];
    s.contents = (s.height*s.width,' ');
}

inline
Screen Screen::move(pos r, pos c) {
    pos row = r*width;;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r*width;
    return contents[row + c];
}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;
    return 0;
}
