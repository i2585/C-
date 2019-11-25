#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i,j;
	char s[100];
	cout << "문자열 입력>>";
	cin.getline(s, 100, '\n');
	for(i=0;i<100;i++){
		if(s[i]=='\0')
			break;
		for(j=0;j<i+1;j++)
			cout << s[j];
		cout << "\n";
	}
	return 0;
} 
