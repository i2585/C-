#include <iostream>
using namespace std;

int main(){
	int num,num1;
	cout << "두 수를 입력하라>>";
	cin >> num >> num1;
	if(num>num1)
		cout << "큰 수 = " << num;
	else
		cout << "큰 수 = " << num1;
	return 0; 
}
