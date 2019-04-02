#include <iostream>
#include "Sales_item.h"

struct{
	int isbn;
	int salesCount;
} info;

int main(){
	Sales_item item1,item2;
	//std::cin >> item1 >> item2;
	//std::cout << item1+item2 << std::endl;
	/*std::cout << "Enter transaction:" << std::endl;
	if(std::cin >> item2){
		while(std::cin >> item1){
			if(item2.same_isbn(item1)){
				item2+=item1;
			}else{
				std::cout << "it is not same!"<<std::endl;
				return -1;
			}
			std::cout << " the total ISBN number is " << item2 << std::endl;
		}
	}else{
		std::cout << "No ISBN was entered!" << std::endl;
		return -1;
	}*/

	//读取多条销售记录,并统计每个ISBN有几条销售记录
	Sales_item currentVal;
	
	return 0;
}
