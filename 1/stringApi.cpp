#include <string>
#include <iostream>
#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(int argc, char const *argv[])
{
	//string s1,s2;
	/*while(cin >> word){
		cout << word << endl;
	}*/
	/*getline(std::cin,s1);
	cout << s1 << endl;
	getline(std::cin,s2);
	cout << s2 << endl;
	if (s1==s2)
	{
		std::cout<<"s1 == s2" << endl;
	}else{
		if (s1>s2)
		{
			cout << s1 << endl;
		}else
			cout << s2 << endl;
	}
	if (s1.size() != s2.size())
	{

		if (s1.size()>s2.size())
		{

			std::cout << s1 << endl;
		}else
			cout << s2 << endl;
	}*/
	/*string str("some string");
	for(auto c:str){
		cout << c << endl;
	}*/
	/*string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;
	for(auto c:s){
		if (ispunct(c))
		{
			++punct_cnt;
		}
	}
	cout << punct_cnt << "punctuation characters in " << s << endl;*/

	/*string s("Hello world!!!");
	for(auto &c : s){
		c = toupper(c);
	}
	cout << s << endl;*/
	/*string s("some string");
	decltype(s.size()) index = 0;
	for (index = 0; index != s.size() && !isspace(s[index]); ++index)
	{
		s[index] = toupper(s[index]);
	}
	cout << s << endl;*/
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15" << "  separated by spaces.Hit ENTER when finished: " << endl;
	string result;
	string::size_type n;
	while(cin >> n){
		if(n<hexdigits.size()){
			result += hexdigits[n];
		}
	}
	cout << "Your hex number is: "<<result << endl;
	return 0;
}
