#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	string b;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	getline(cin, a);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> b;
	if(a==b)
		cout << "�����ϴ�.";
	else
		cout << "���� �ʽ��ϴ�.";
	return 0;
}
