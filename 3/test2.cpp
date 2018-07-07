#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <list>
#include <deque>
using namespace std;

bool find1(vector<int>::iterator a,vector<int>::iterator b,int c){
	
	for(a;a!=b;a++){
		if(*a == c){
			return true;
		}
	}
	return false;
}
vector<int>::iterator find2(vector<int>::iterator a,vector<int>::iterator b,int c){
	
	for(a;a!=b;a++){
		if(*a == c){
			return a;
		}
	}
	return b;
}


int main(){
	vector<int> vec{4,5,2,7,3,56,78,32,35,77,4};
	int find_number = 1;
	if(find2(vec.begin(),vec.end(),find_number) != vec.end()){
		cout << "We have found it" << endl;
	}else 
		cout << "Sorry,there is no "<< find_number<<" in the range " << endl;


	//vector<int> vec;
	//vector<int> vec(10);
	//vector<int> vec(10,1);
	//vector<int> vec{1,2,3,4,5};
	//vector<int> vec(other_vec);
	//vector<int> vec(other_vec.begin(),other_vec.end());
	
	list<int> list1(7,8);
	vector<int> vec3(5,2);

	vector<double> vec2(list1.begin(),list1.end());
	vector<double> vec4(vec3.begin(),vec3.end());

	vector<double>::iterator it1 = vec2.begin();
	vector<double>::iterator it2 = vec4.begin();
	for(it1;it1 != vec2.end();it1++){
		cout << *it1 << endl;
	}
	for(it2;it2 != vec4.end();it2++){
		cout<<*it2<<endl;
	}

	list<const char*> old_name;
	vector<const char*> names;
	names.assign(old_name.begin(),old_name.end());

	deque<string> deque1;
	string buf;
	while(cin >> buf){
		deque1.push_back(buf);
	}
	deque<string>::iterator deque1_it1 = deque1.begin();
	for(deque1_it1;deque1_it1!=deque1.end();deque1_it1++){
		cout << *deque1_it1 << endl;
	}
	return 0;
}
