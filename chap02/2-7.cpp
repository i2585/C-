#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char s[100];
	while(1){
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(s, 100, '\n');
		if(strcmp(s,"yes")==0){
			cout << "�����մϴ�...";
			break;
		}		
	}
	return 0; 
}
