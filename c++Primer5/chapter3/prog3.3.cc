#include <iostream>
#include <string>
#include <vector>
#include <stddef.h>

using namespace std;

int main(){
	
	/*string s;
	std::locale loc;
	vector<string> vec;
	while(cin >> s){
		vec.push_back(s);
	}
	
	for(decltype(vec.size()) ix = 0;ix<vec.size();++ix){
		for(auto &c:vec[ix]){
			c = toupper(c);
		}
	}
	for(auto &c:vec){
		cout << c << endl;
	}*/


	/*int i;
	vector<int> vec;
	while(cin >> i){
		vec.push_back(i);	
	}
	for(decltype(vec.size())ix = 0; ix<vec.size()-1;ix++){
		cout << vec[ix] + vec[ix+1] << endl;
	}
	for(decltype(vec.size()) ix = 0; ix <= vec.size()-ix-1;ix++){
		cout << vec[ix] +vec[vec.size()-1-ix] << endl;
	}*/

	/*string text = "hello world!";

	for(auto it = text.begin(); it != text.end() ;++it){
		*it = toupper(*it);
	}
	cout << text << endl;*/

	/*vector<int> vec{1,2,3,4,5,6,7,8,9,10};
	for(auto it = vec.begin();it!=vec.end();++it){
		*it = (*it) *2;
		cout << *it << endl;
	}
	auto beg = vec.begin(),end = vec.end();
	auto mid = vec.begin()+(end-beg)/2;
	cout << *mid << endl;*/
	
	int is[] = {1,2,3,4,5,6,7,8,9};
	int *beg = begin(is);
	int *pend = end(is);
	while(beg!=pend){
		*beg = 0;
		beg++;
	}
	for(size_t i = 0; i < 9;i++){
		cout << is[i] << endl;
	}

	return 0;
}
