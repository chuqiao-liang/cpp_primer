#ifndef SALESDATA_H
#define SALESDATA_H

#include <iostream>
#include <string>

using namespace std;

struct Sales_Data;
istream &read(istream &,Sales_Data &);

struct Sales_Data {
    friend istream &read(istream &, Sales_Data &);
    friend ostream &print(ostream &, Sales_Data &);
    friend Sales_Data add(const Sales_Data &, const Sales_Data &);
public:
    Sales_Data(string s = ""): Sales_Data(s,0,0) {cout << "delegated!" << endl; } // defines default constructor as well as one that takes string argument!
    // Sales_Data(const string &s): bookNo(s) { }
    Sales_Data(const string &s, unsigned n, double p) : bookNo(s), UnitsSold(n), revenue(p*n) { }
    Sales_Data(istream &is) { read(is, *this); }
    Sales_Data& combine(const Sales_Data&);
    string isbn() const { return bookNo; };
private:
    double avg_price() const;
    string bookNo;
    int UnitsSold; //= 0;
    double revenue; //= 0.00;
};
inline 
double Sales_Data::avg_price() const {
    return UnitsSold ? revenue/UnitsSold : 0;
}

Sales_Data add(const Sales_Data &, const Sales_Data &);
ostream &print(ostream &, Sales_Data &);
istream &read(istream &, Sales_Data &);

#endif
