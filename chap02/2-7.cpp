#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char s[100];
	while(1){
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(s, 100, '\n');
		if(strcmp(s,"yes")==0){
			cout << "종료합니다...";
			break;
		}		
	}
	return 0; 
}
