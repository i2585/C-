#include <iostream>
using namespace std;

class MyVector{
	int *mem;
	int size;
	public :
		MyVector(int n, int val);
		~MyVector(){
			delete [] mem;
		}
};
MyVector :: MyVector(int n=100, int val=0){
	mem = new int [n];
	size = n;
	for(int i=0;i<size;i++)
		mem[i]=val;
	cout << "배열의 값 >>";
	for(int i=0;i<size;i++)
		cout << mem[i];
	cout << endl;
}
int main(){
	MyVector *v1, *v2;
	v1 = new MyVector();
	v2 = new MyVector(20,1);
	
	delete v1;
	delete v2;
}
