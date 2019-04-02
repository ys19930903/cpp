#include <iostream>
#include <stddef.h>
#include "Chapter6.h"
#include <string>
using namespace std;


/*编写函数的声明,令其接受两个int形参并且返回类型也是int;然后声明一个vector对象,令其元素是指向该函数的指针.*/
int mySum(int i1,int i2);


int jiecheng(int val){
	int jiecheng = val;
	while(val>1){
		jiecheng = jiecheng*(val-1);
		val--;
	}
	return jiecheng;
}

void ABS(int val){
	val >=0 ? cout << val << endl:cout << -val << endl;
}

size_t count_calls(){
	static size_t ctr = 0;
	return ++ctr;
}

int main(int argc,char **argv){

	/*cout << "Enter a number " << endl;
	int val;
	cin >> val;
	cout << jiecheng(val) << endl;*/
	//ABS(-5);

	/*for(size_t i = 0;i!=10;i++){
		cout << count_calls() << endl;
	}*/
	//fact(5);
	/*int val1 = 10,val2 = 20;
	exchange(&val1,&val2);
	cout <<val1 << val2 << endl;*/

	/*int val = 10;
	reset(val);
	cout << val << endl;*/

	string msg;
	for(int i = 1; i < argc; i ++){
		msg += argv[i];
		msg += " ";
	}
	cout << msg << endl;
	return 0;
}

void exchange(int* p1,int* p2){
	int val = *p1;
	*p1 = *p2;
	*p2 = val;
}

void reset(int &val){
	val = 0;
}

bool string_up(const string s){
	bool flag = 0;
	for(auto c:s){
		if(toupper(c)){
			flag = 1;
			break;
		}
	}
	return flag;
}

string string_down(string &s){
	for(auto c:s){
		c = c+32;
	}
	return s;
}
