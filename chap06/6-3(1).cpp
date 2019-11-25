#include <iostream>
using namespace std;

int big(int a, int b){
	if(a>b){
		if(100>a)
			return a;
		else
			return 100;
	}
	else if(100>b)
		return b;
	else
		return 100;
}
int big(int a, int b, int c){
	if(a>b){
		if(c>a)
			return a;
		else
			return c;
	}
	else if(c>b)
		return b;
	else
		return c;
}
int main(){
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}
