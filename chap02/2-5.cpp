#include <iostream>
using namespace std;

int main(){
	int count = 0;
	int i;
	char s[100];
	cout << "문자들을 입력하라(100개 미만).\n";
	cin.getline(s, 100, '\n');
	for(i=0;i<100;i++){
		if(s[i]=='x')
			count++;
		if(s[i]=='\0')
			break;
	}
	cout << "x의 개수는 " << count;
	return 0; 
}
