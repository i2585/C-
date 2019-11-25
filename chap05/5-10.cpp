#include<iostream>
#include<string>
using namespace std;

class Buffer{
	string text;
	public :
		Buffer(string text){
			this -> text = text;
		}
		void add(string next){
			text = text + next;
		}
		void print(){
			cout << text << endl;
		}
};
Buffer& append(Buffer &b,string s){
	b.add(s);
	return b;	
}
int main(){
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp = "dsfsd";
	temp.print();
	buf.print();
}
