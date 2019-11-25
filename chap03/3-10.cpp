#include <iostream>
#include <string>
using namespace std;

class Add{
	public :
		int a, b;
		void setValue(int x, int y);
		int calculate();
};
void Add :: setValue(int x, int y){
			a=x; b=y;
}
int Add :: calculate(){
	return a+b;
}
class Sub{
	public :
		int a, b;
		void setValue(int x, int y);
		int calculate();
};
void Sub :: setValue(int x, int y){
			a=x; b=y;
}
int Sub :: calculate(){
	return a-b;
}
class Mul{
	public :
		int a, b;
		void setValue(int x, int y);
		int calculate();
};
void Mul :: setValue(int x, int y){
			a=x; b=y;
}
int Mul :: calculate(){
	return a*b;
}
class Div{
	public :
		int a, b;
		void setValue(int x, int y);
		int calculate();
};
void Div :: setValue(int x, int y){
			a=x; b=y;
}
int Div :: calculate(){
	return a/b;
}
int main(){
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x,y;
	char c;
	while(true){
		cout << "두 정수와 연산자를 입력하세요>>"; 
		cin >> x >> y >> c;
		if(c=='+'){
			a.setValue(x,y);
			cout << a.calculate() << endl; 
		}
		if(c=='-'){
			s.setValue(x,y);
			cout << s.calculate() << endl; 
		}
		if(c=='*'){
			m.setValue(x,y);
			cout << m.calculate() << endl; 
		}
		if(c=='/'){
			d.setValue(x,y);
			cout << d.calculate() << endl; 
		}
	}
}
