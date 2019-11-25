#include <iostream>
using namespace std;

class Circle{
	int temp;
	public :
		void swap(int &a, int &b){
			temp = a;
			a = b;
			b = temp;
		};
};
int main(){
	Circle c;
	int m = 2, n = 5;
	c.swap(m,n);
	cout << "m=" << m << " " << "n=" << n;
}
