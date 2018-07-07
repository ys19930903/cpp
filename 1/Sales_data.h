#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data{
	std::string bookno;
	unsigned units_old = 0;
	double revenue = 0;
};
#endif
