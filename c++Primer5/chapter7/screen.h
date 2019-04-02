#ifndef MY_SCREEN
#define MY_SCREEN 

#include <string>
using namespace std;

class Screen{
	public:
		typedef std::string::size_type pos;
		Screen() = default;//因为Screen有另一个构造函数,所以本函数是必需的.
		Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
		char get() const{return contents[cursor];}
		inline char get(pos ht,pos wd) const;
		Screen& move(pos r,pos c);
		void some_member() const;
	private:
		mutable size_t access_ctr;//即使在一个const对象内也能被修改.
		pos cursor = 0;
		pos height = 0,width = 0;
		std::string contents;
};

void Screen::some_member() const{
	++access_ctr;//保存一个技术值,用于记录成员函数被调用的次数.
}

inline Screen &Screen::move(pos c,pos r){
	pos row = r * width;
	cursor = row+c;
	return *this;
}

char Screen::get(pos r,pos c)const{
	pos row = r * width;
	return contents[row+c];
}

#endif
