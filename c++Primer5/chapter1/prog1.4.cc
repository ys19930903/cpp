#include <iostream>

int main(){
	/*int v = 50,sum;
	while(v <= 100){
		sum+=v;
		v++;
	}
	std::cout << sum << std::endl;*/

	/*int v = 10;
	while(v>=0){
		std::cout << v << std::endl;
		v--;
	}*/

	/*int v1 = 0, v2 = 0;
	std::cout <<" please two numbers " << std::endl;
	std::cin >> v1 >> v2;
	if(v1 > v2){
		while(v2 <= v1){
			std::cout << v2 << std::endl;
			v2++;
		}
	}else if(v1 < v2){
		while(v1 <= v2){
                        std::cout << v1 << std::endl;
                        v1++;
                }
	}else{
		std::cout << v1 << std::endl;
	}*/

	/*int v1 = 0,sum = 0;
	while(std::cin >> v1){
		sum+=v1;
	}
	std::cout << sum << std::endl;*/

	int currVal = 0,val = 0;
	if(std::cin >> currVal){
		int cnt = 1;
		while(std::cin >> val){
			if(val == currVal){
				++cnt;
			}else{
				std::cout << currVal << " occurs " << cnt << " times "
					<< std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}

	return 0;
}
