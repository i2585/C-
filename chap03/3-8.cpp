#include <iostream>
#include <string>
using namespace std;

class Integer{
public :
	int number;
	Integer(int n){
		number = n;
	}
	Integer(string s){
		number = stoi(s);
	}
	int get(){
		return number;
	}
	int set(int m){
		number = m;
		return number;
	}
	bool isEven(){
		number = true;
		return number;
	}
};
int main(){
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';
	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
