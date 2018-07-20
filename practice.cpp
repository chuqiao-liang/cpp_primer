#include <iostream>
#include <string>
#include "Sales_Data.h"

using namespace std;

int main() {
    Sales_Data data1, data2;
    double amtmoney;
    cin >> data1.ISBN >> data1.units_sold >> data1.unit_price;
    cin >> data2.ISBN >> data2.units_sold >> data2.unit_price;

    while (data1.ISBN != data2.ISBN) {
        cerr << "ISBN do not match, try again" << endl;
        cin >> data1.ISBN >> data1.units_sold >> data1.unit_price;
        cin >> data2.ISBN >> data2.units_sold >> data2.unit_price;
    }

    int totalcnt = data1.units_sold + data2.units_sold;

    if (totalcnt == 0) {
        cout << "no units sold" << endl;
        return 0;
    }

    data1.unit_revenue = data1.units_sold * data1.unit_price;
    data2.unit_revenue = data2.units_sold * data2.unit_price;
    amtmoney = data1.unit_revenue + data2.unit_revenue;

    cout << "total revenue is " << amtmoney << " dollars" << endl;

    return 0;
}

