#include <iostream>
using namespace std;

bool isMultiple(int a, int b)
{
	if(b%a==0)
		return true;
	else
		return false;
}
int main(){
	int a,b;
	cout << "�� ���� �Է�>>";
	cin >> a >> b;
	if(isMultiple(a,b))
		cout << "Yes";
	else
		cout << "False";
	return 0;
}
