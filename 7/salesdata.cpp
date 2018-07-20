#include <iostream>
#include <string>
#include "salesdata.h"

using namespace std;

istream &read(istream &is, Sales_Data &item) {
    double price = 0;
    is >> item.bookNo >> item.UnitsSold >> price;
    item.revenue = price * item.UnitsSold;
    return is;
}

ostream &print(ostream &os, Sales_Data &item) {
    os << item.isbn() << " " << item.UnitsSold << " " << item.revenue;
    return os;
}

Sales_Data add(const Sales_Data &firstitem, const Sales_Data &seconditem) {
    Sales_Data sum = firstitem;
    sum.combine(seconditem);
    return sum;
}

Sales_Data& Sales_Data::combine(const Sales_Data& aa) {
    UnitsSold += aa.UnitsSold;
    revenue += aa.revenue;
    return *this;
}


int main() {
    /*
       string book;
       int numsold;
       double price;

       cin >> book >> numsold >> price;
       Sales_Data total(book, numsold, price);
       */
    Sales_Data total(cin);   
    Sales_Data trans;
    double price;
    if (!total.isbn().empty()) {
        //if (read(cin, total)) {
        //total.revenue = price*(total.UnitsSold); done with read() function
        while (read(cin, trans)) {
            //trans.revenue = price*trans.UnitsSold; done with read() function
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else {
                print(cout, total) << endl;
                // cout << "we sold " << total.UnitsSold << " copies of " << total.bookNo << " and made " << total.revenue << endl;
                total = trans;
            }
        } 
        print(cout, total);
        //cout << "we sold " << total.UnitsSold << " copies of " << total.bookNo << " and made " << total.revenue << endl; return 0;

    } else {
        cerr << "no data..." << endl;
        return -1;
    }
    return 0;
    }
