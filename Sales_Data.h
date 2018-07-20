#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_Data {
    std::string ISBN;
    unsigned int units_sold;
    double unit_price;
    double unit_revenue;
};

#endif
