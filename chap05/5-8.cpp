#include <iostream>
using namespace std;

class MyIntStack{
	int *p;
	int size;
	int tos;
	public :
		MyIntStack();
		MyIntStack(int size);
		MyIntStack(const MyIntStack& s);
		~MyIntStack();
		bool push(int n);
		bool pop(int &n);
};
MyIntStack::MyIntStack(){
	tos = -1;
	size = 0;
}
MyIntStack::MyIntStack(int size){
	tos = -1;
	this -> size = size;
	p = new int[size];
}
MyIntStack::MyIntStack(const MyIntStack& s){
	this -> size = s.size;
	this -> tos = s.tos;
	this -> p = new int[size];
	for(int i=0;i<size;i++)
		this -> p[i]=s.p[i];
}
MyIntStack::~MyIntStack(){
	if(p)
		delete [] p;
}
bool MyIntStack::push(int n){
	if(tos+1==size)
		return false;
	else{
		p[++tos]=n;
		return true;
	}
}
bool MyIntStack::pop(int &n){
	if(tos<0)
		return false;
	else{
		n=p[tos];
		tos--;
		return true;
	}
}
int main(){
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b(a);
	b.push(30);
	
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl; 
}
