#include <iostream>
using namespace std;

class Book{
	string title;
	int price, pages;
	public :
		Book(string title="", int price=0, int pages=0){
			this -> title = title; this -> price = price; this -> pages = pages;		
		}
		void show(){
			cout << title << ' ' << price << "�� " << pages << " ������" << endl;
		}
		string getTitle(){
			return title;
		}
		friend Book operator+= (Book& b,int c);
		friend Book operator-= (Book& b,int c);
};
Book operator+= (Book& b, int c){
	b.price += c;
	return b;
}
Book operator-= (Book& b, int c){
	b.price -= c;
	return b;
}
int main(){
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a+=500;
	b-=500;
	a.show();
	b.show(); 
}
