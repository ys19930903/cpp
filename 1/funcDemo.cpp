#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int getHigh(int,int*);
int fact(int);
int fact2();
double swap(double);
void exchange(int*,int*);
int getHigh(int i1,int* i2){
	if(i1 > *i2){
		return i1;
	}else{
		return *i2;
	}
}
int main(){
	/*int x = 10,y = 12;
	int* z = &y;
	getHigh(x,z);
	int j = fact(5);
	cout<< "5! is "<<j<<endl; 
	int h = fact2();
	cout  << "h is " << h <<  endl;
	cout << "Please input one" << endl;
	double d;
	cin >> d;
	d = swap(d);
	cout<<d<<endl;*/
	int x = 10,y = 12;
	int* x1 = &x;
	int* y1 = &y;
	exchange(x1,y1);
	cout << " x = " << x << " y = " << y << endl;
	return 0;
}

int fact(int val){
	int ret = 1;
	while(val > 1){
		ret *= val--;
	}
	return ret;
}
int fact2(){
	cout << "Please input one int" << endl;
	int x;
	cin >> x;
	int y = fact(x);
	return y;
}
double swap(double d){
	if(d > 0){
		return d;
	}else{
		return -d;
	}
}
void exchange(int* i1,int* i2){
	int x = *i1;
	*i1 = *i2;
	*i2 = x;
}
string::size_type find_char(const string &s,char c,string::size_type &occurs){
	auto ret = s.size();
	occurs = 0;
	for(decltype(ret) i = 0; i != s.size(); ++i){
		if(s[i] == c){
			if(ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}

//内联函数一般是定义在一些简单的并且被频繁调用的函数.
inline const string & shorterString(const string &s1,const string &s2){
	return s1.size() <= s2.size() ? s1 : s2;
}
//constexpr函数是指 能用于常量表达式 的函数.函数的返回值类型及所有的形参类型都必须是字面值类型,且函数中必须有且只有一条return语句.
constexpr int new_sz(){return 42};
constexpr int foo = new_sz();//constexpr函数被隐式地指定为内联函数.
