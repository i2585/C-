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
			cout << title << ' ' << price << "��" << endl;
		}
};
int main(){
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
