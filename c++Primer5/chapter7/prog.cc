#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Sales_data{
	Sales_data();
	string bookNo;
	unsigned units_sold;
	double revenue;
};

Sales_data::Sales_data(){
	units_sold = 0;
	revenue = 0.0;
}

class Person{
	public:
		Person(string Client_name,string Client_address);//构造函数
		Person();

		string name;
		string address;//内部变量

		void Show_info(){
			cout << name << "'s" << " address is " << address <<endl;
		}

		const string& getName() {
			name = "Mr.Yang";
			return name;
		}

		const string& getAddress() {
			return address;
		}//返回姓名地址的函数,只可访问,不能修改
};

Person::Person(string Client_name,string Client_address):name(Client_name),address(Client_address){};//构造函数定义内部变量
istream& read(istream& is,Person& person){
	is >> person.name >> person.address;
	return is;
}

ostream& print(ostream& os,const Person& person){
	os << person.name << " "<< person.address;
	return os;
}

//此处我们在一个文件内定义了该类,如果类比较大,应置于.h文件中

int main(int argc,char **argv){
	/*Sales_data total;
	if(cin >> total.bookNo >> total.units_sold >> total.revenue){
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
			if(total.bookNo == trans.bookNo){
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}else{
				cout << total.bookNo << " " << total.units_sold <<" " << total.revenue << endl;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;

	}else{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}*/

	Person Client1("Mr.right","your heart");//实例化
	Client1.Show_info();//调用显示信息的函数
	cout << Client1.getName()<< endl;
	return 0;

}
