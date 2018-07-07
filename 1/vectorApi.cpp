#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
	/*vector<int> v{1,2,3,4,5,6,7,8,9};
	for(auto &i:v){
		i *= i;
	}
	for(auto i : v){
		std::cout << i << " ";
	}
	std::cout << std::endl;*/
	/*vector<unsigned> scores(11,0);
	unsigned grade;
	while(std::cin >> grade){
		//cout << grade << endl;
		if(grade <= 100){
			++scores[grade/10];
		}
	}
	for(auto i : scores){
		std::cout << i << " ";
	}
	std::cout << std::endl;*/

	string s("some string");
	for(auto it = s.begin();it!=s.end() && !isspace(*it);++it){
		*it = toupper(*it);
	}
	cout << s << endl;
	return 0;
}
