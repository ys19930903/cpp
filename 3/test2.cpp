#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <list>
#include <deque>
#include <forward_list>
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

int dmain(){
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

void func26(int ia[],int size){
	vector<int> vec1(ia,ia+size);
	list<int> list1(ia, ia+size);

	vector<int>::iterator it1 = vec1.begin();
	list<int>::iterator it2 = list1.begin();

	while(it1 != vec1.end()){
		if((*it1)%2 == 0){
			it1 = vec1.erase(it1);
		}else{
			++it1;
		}
	}

	while(it2 != list1.end()){
		if(*it2 % 2 != 0)
			it2 = list1.erase(it2);
		else	
			++it2;
	}

	vector<int>::iterator it3 = vec1.begin();
	list<int>::iterator it4 = list1.begin();
	for(it3;it3 != vec1.end();++it3){
		cout << *it3 << " ";	
	}
	cout << endl;
	for(it4; it4 != list1.end();++it4){
		cout << *it4 << " ";	
	}
	cout << endl;
}

void func27(forward_list<int> &flist){
	auto prev = flist.before_begin();
	auto curr = flist.begin();
	while(curr != flist.end()){
		if(*curr % 2 != 0)
			curr = flist.erase_after(prev);
		else{
			prev = curr;

		++curr;}
	}
}

void func28(forward_list<string> &flist,string str1,string str2){
	auto prev = flist.before_begin();
	auto curr = flist.begin();
	bool flag = false;
	for(curr;curr != flist.end();prev = curr++){
		if(*curr == str1){
			flist.insert_after(curr,str2);
			flag = true;
			break;
		}
	}
	if(!flag){
		flist.insert_after(prev,str2);
	}
}

void func43(string &s,string &oldVal,string &newVal){
	int _size = oldVal.size();
	string::iterator it1 = s.begin();
	string::iterator it2 = newVal.begin();
	string::iterator it3 = newVal.end();

	for(it1;it1 <= (s.end() - oldVal.size()+1);++it1){
		if((s.substr(it1-s.begin(),_size)) == oldVal){
			it1 = s.erase(it1,it1+_size);
			it1 = s.insert(it1,it2,it3);
			it1+=newVal.size();
		}
	}
}

void func44(string &s,string &oldval,string &newval){
	
	int _size = oldval.size();
	string::iterator it1 = s.begin();
	for(it1;it1 <= (s.end() - oldval.size()+1);++it1){
		if((s.substr(it1-s.begin(),_size) == oldval)){
			s.replace(it1-s.begin(),_size,newval);	
		}
	}

}

int main1(){
	list<int> list1(5,7);
	deque<int> deque1;
	deque<int> deque2;

	list<int>::iterator it1 = list1.begin();
	for(it1;it1!=list1.end();it1++){
		if((*it1)%2 == 0){
			deque1.push_back(*it1);
		}else{
			deque2.push_back(*it1);
		}
	}
	deque<int>::iterator it2 = deque1.begin();
	deque<int>::iterator it3 = deque2.begin();
	cout<<"偶数为:";
	for(it2;it2!=deque1.end();it2++){
		cout<<*it2<<" ";
	}
	cout << endl;
	cout<<"奇数为:";
	for(it3;it3!=deque2.end();it3++){
		cout<<*it3<<" ";
	}
	cout << endl;
	vector<int> vec1(5,3);
	int a =  vec1.front();
	int b = vec1[0];
	int c = vec1.at(0);
	int d = *vec1.begin();
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	int ia_count = sizeof(ia) / sizeof(int);
	cout << "ia.size = " << ia_count<< endl;
	func26(ia,ia_count);
	forward_list<int> flist = {0,1,2,3,4,5,6,7,8,9};
	func27(flist);
	forward_list<int>::iterator it_flist = flist.begin();
	for(it_flist;it_flist != flist.end();++it_flist){
		cout << *it_flist << " "; 
	}
	cout << endl;
	//forward_list<string> list28(4,"sadi");
	forward_list<string> list28{"sadi","sadi","sad5","sad5","sadi"};
	string str1 = "sad5";
	string str2 = "sad";
	func28(list28,str1,str2);
	forward_list<string>::iterator it28 = list28.begin();
	for (it28; it28!=list28.end();++it28)
	{
		cout<<*it28<<" ";
	}
	cout << endl;
	return 0;
}

int main(){
	string s = "abcdefg";
	string oldval = "bc";
	string newval = "asas";
	//func43(s,oldval,newval);
	func44(s,oldval,newval);
	cout << s << endl;
	system("pause");
	return 0;
}
