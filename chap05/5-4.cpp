#include <iostream>
using namespace std;
bool bigger(int a, int b, int& big){
	if(a==b)
		return true;
	else{
		if(a>b)
			big = a;
		else
			big = b;
		return false;
	}
}
int main(){
	int a,b,big;
	cout << "두 정수를 입력하세요: ";
	cin >> a >> b;
	if(bigger(a,b,big))
		cout << "a와b는 같다." << endl;
	else
		cout << big; 
}
