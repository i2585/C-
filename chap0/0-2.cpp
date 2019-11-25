#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout << "두 정수 입력>>";
	cin >> a >> b;
	if(b%a==0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
