#include <iostream>
using namespace std;

int main(){
	int count = 0;
	int i;
	char s[100];
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(s, 100, '\n');
	for(i=0;i<100;i++){
		if(s[i]=='x')
			count++;
		if(s[i]=='\0')
			break;
	}
	cout << "x�� ������ " << count;
	return 0; 
}
