#include <iostream>
using namespace std;

class AbstractStack{
	public:
		virtual bool push(int n)=0;
		virtual bool pop(int& n)=0;
		
		virtual int size()=0;
};

class IntStack:public AbstractStack{
	int s,top,full;
	int *stack;
	public:
		IntStack(){
			top=-1;	full=6;	s=0;
			stack = new int[full];
		}
		bool push(int n){
			stack[s]=n;
			if(full==s)
				return false;
			else{
				s++;
				return true;
			}
		}
		bool pop(int &n){
			top++;
			n=stack[top];
			if(s==0)
				return false;
			else{
				s--;
				return true;
			}
		}
		int size(){
			return s;
		}
};

int main(){
	IntStack stack;
	int number,pop_number;
	while(1){
		cout << "1:push	2:pop	3:size	4:exit\n" << "번호를 입력하세요>> ";
		cin >> number;
		if(number==1){
			int n;
			cout << "입력받을 정수>> ";
			cin >> n; 
			if(stack.push(n))
				cout << "push : " << n << "\n\n";
			else
				cout << "stack full...\n\n";
		}
		else if(number==2)
			if(stack.pop(pop_number))
				cout << "pop : " << pop_number << "\n\n";
			else
				cout << "stack empty...\n\n";
		else if(number==3)
			cout << "stack의 크기>> " << stack.size() << "\n\n";
		else{
			cout << "stack을 종료합니다.\n";
			break;
		}
	}
}


