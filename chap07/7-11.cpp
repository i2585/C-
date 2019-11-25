#include <iostream>
using namespace std;

class Stack{
	int *arr;
	int index;
	public :
		Stack(){
			arr = new int[100];
			index = 0;
		}
		~Stack(){
			delete [] arr;
		}	
		Stack& operator<< (int a){
			arr[index] = a;
			index++;
			return *this;
		}
		void operator>> (int& x){
			x=arr[index-1];
			index--;
		}
		bool operator! (){
			if(index==0) return true;
			else return false;
		}
}; 

int main(){
	Stack stack;
	stack << 3 << 5 << 10;
	while(true){
		if(!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
