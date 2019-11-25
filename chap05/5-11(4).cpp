#include<iostream>
#include<cstring>
using namespace std;

class Book{
	string title;
	int price;
	public :
		Book(const string title, int price){
			this -> price = price;
			this->title=title;
		}
		~Book(){
			
		}
		void set(string title, int price){
			this->title=title;
			this -> price = price;
		}
		void show(){
			cout << title << ' ' << price << "원" << endl;
		}
};
int main(){
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
