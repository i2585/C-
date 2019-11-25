#include <iostream>
using namespace std;
int big(int a=0, int b=0, int c=100){
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
