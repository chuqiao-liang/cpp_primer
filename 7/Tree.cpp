#include <iostream>
#include <string>

using namespace std;

class Tree {
    friend ostream &print(ostream &, Tree &);
public:
    Tree() : Type(""), Color("brown"), Height(0), NumLiving(0), TotalLength(0) { }
    Tree(const string &s, const string &c, double h, int l):Type(s), Color(c), Height(h), NumLiving(l), TotalLength(h*l) { }
    Tree(istream &is) {
        is >> Type >> Color >> Height >> NumLiving;
        TotalLength = Height * NumLiving;
    }
private:
    string Type;
    string Color;
    double Height;
    int NumLiving;
    double TotalLength;
};

ostream &print(ostream &os, Tree &t) {
    os << t.Type << " " << t.Color << " " << t.Height << " " << t.NumLiving << " " << t.TotalLength << endl;
    return os;
}

int main() {
    Tree maple("maple","orange", 4.03, 2);
    print(cout,maple) << endl;
    return 0;
}

