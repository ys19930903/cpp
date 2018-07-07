#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
istream& func(istream& is){
	int mm;
	while(is >> mm){
		cout << mm << endl;	
	}
	auto state = is.rdstate();
	cout << state << endl;
	cout << "iostream::badbit = "<< iostream::badbit 
		<< " iostream::failbit = " << iostream::failbit 
		<< " iostream::eofbit = " << iostream::eofbit 
		<< " iostream::goodbit = " << iostream::goodbit 
		<< endl;
	is.clear();
	return is;
}


void func2(int argc,char** argv){
	string infile = "test.cpp";
	vector<string> vec;//声明一个vectora
	ifstream in(infile);
	if(in){
		string buf;
		while(getline(in,buf)){
			vec.push_back(buf);
		}
	}else{
		cerr << "cannot open this file: "<< infile << endl;
	}

	for(vector<string>::const_iterator iter = vec.begin(); iter != vec.cend(); iter++){
		//cout << *iter<< endl;	
		istringstream iss(*iter);
		string word;
		while(iss >> word)
			cout << word << endl;
	}

}

void func3(int argc,char** argv){
	string infile = "test.cpp";
	vector<string> vec;//声明一个vectora
	ifstream in(infile);
	if(in){
		string buf;
		while(in >> buf){
			vec.push_back(buf);
		}
	}else{
		cerr << "cannot open this file: "<< infile << endl;
	}

	for(vector<string>::const_iterator iter = vec.begin(); iter != vec.cend(); iter++){
		cout << *iter<< endl;	
	}

}


int main(int argc,char** argv){
	//func(cin);
	func2(argc,argv);
	//func3(argc,argv);
	return 0;
}








