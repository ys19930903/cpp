#include <string>
class Screen{
	friend class Window_mgr;
	//friend void Window_mgr::clear(ScreenIndex);
	public:
		typedef std::string::size_type pos;
		//using pos = std::string::size_type;//和typedef一样.
		Screen() = default;
		Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
		char get() const{ return contents[cursor];}
		inline char get(pos ht,pos wd) const;
		void some_member() const;
		Screen &move(pos r,pos c);
		Screen &set(char);
		Screen &set(pos,pos,char);
		Screen &display(std::ostream &os){ do_display(os);return *this;}
		const Screen &display(std::ostream &os) const { do_display(os);return *this;}
	private:
		pos cursor = 0;
		pos height = 0,width = 0;
		std::string contents;
		mutable size_t access_ctr;//即使在一个const对象内也能被修改
		void do_display(std::ostream &os) const {os << contents;}
};

inline Screen &Screen::move(pos r,pos c){
	pos row = r*width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const{
	pos row = r * width;
	return contents[row+c];
}

void Screen::some_member() const{
	++access_ctr;
}
inline Screen &Screen::set(char c){
	contents[cursor] = c;
	return *this;
}
inline Screen &Screen::set(pos r,pos col,char ch){
	contents[r*width + col] = ch;
	return *this;
}
