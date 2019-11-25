#include <iostream>
#include <string>
#include "3-10-2.h"
using namespace std;

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
