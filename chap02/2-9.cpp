#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	string add;
	string age;
	cout << "�̸���?";
	getline(cin, name); 
	cout << "�ּҴ�?";
	getline(cin, add); 
	cout << "���̴�?";
	getline(cin, age);
	cout << name + ", "<< add + ", " << age + "��";
	return 0;
}
