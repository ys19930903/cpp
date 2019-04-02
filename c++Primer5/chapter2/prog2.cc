#include <iostream>
#include "Sales_data.h"
struct Foo{};

/*struct Sales_data{
	double danjia;
	std::string name;
	std::string bookNo;
	unsigned int count;
	double zongshouru;
};*/

int main(){
	/*unsigned u = 10,u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10,i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;*/

	/*int i,&ri = i;
	i = 5;
	ri = 10;
	std::cout << i << " " << ri <<std::endl;*/ 

	Sales_data book1,book2;
	std::cin >> book1.bookNo >>book1.name >> book1.danjia >> book1.count;
	book1.zongshouru = book1.count * book1.danjia;
	std::cin >> book2.bookNo >> book2.name >> book2.danjia >> book2.count;
	book2.zongshouru = book2.count * book2.danjia;
	if(book1.bookNo == book2.bookNo){
		unsigned totalCount = book1.count +book2.count;
		double totalShouru = totalCount * book1.danjia;
		std::cout << book1.bookNo << " " << totalCount << " " << totalShouru << std::endl; 
		return 0;
	}else{
		std::cout << "not same book" << std::endl;
		return -1;
	}
	return 0;
}
