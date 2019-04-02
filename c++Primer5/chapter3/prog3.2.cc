#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	/*cout << "Please enter some info!" << endl;
	string s1;
	//getline(cin,s1);
	cin >> s1;
	cout << s1 << endl;*/

	/*string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1.length()==s2.length()){
		cout << "is same" << endl;
	}else{
		if(s1>s2){
			cout <<s1 << endl;	
		}else
			cout <<s2<< endl;
	}*/


	/*string s1,s;
	while(cin >> s1){
		s += s1;
		s+=" ";
	}
	cout << s << endl;*/

	/*string s1;
	getline(cin,s1);
	for(auto &s:s1){
		s = 'X';
	}
	cout << s1 << endl;*/
	
	/*string s1;
	getline(cin,s1);
	for(auto &s:s1){
		if(ispunct(s)){
			s='\0';
		}
	}
	cout << s1 <<endl;*/
	
	int i;
	vector<int> vec;
	while(cin >> i){
		vec.push_back(i);
	}
	cout << vec.size() << endl;

	return 0;
}
