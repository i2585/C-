#include<iostream>
#include<cstring>
using namespace std;

class Book{
	char *title;
	int price;
	public :
		Book(const char* title, int price){
			this -> price = price;
			int len = strlen(title);
			this -> title = new char [len+1];
			this->title = title;
		}
		Book(const Book& b){
			this -> price = price;
			int len = strlen(b.title);
			this -> title = new char [len+1];
			strcpy(this->title, b.title);
		}
		~Book(){
			if(title)
				delete [] title;
		}
		void set(char* title, int price){
			strcpy(this->title,title);
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
