#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int i,j,count=0;
	char buf[10000];
	int a[30]={0}; 
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(buf, 10000, ';'); 
	for(i=0;i<strlen(buf);i++){
		if(isalpha(buf[i])!=0){
			if('A'<=buf[i]&&'Z'>=buf[i])
				buf[i]=tolower(buf[i]);
			for(j=0;j<26;j++){
				if(buf[i]==(j+'a')){
					a[j]++;
					count++; 
				}
			}
		}
	}
	cout << "총 알파벳 수 " << count << "\n";
	cout << "\n";
	for(i=0;i<26;i++){
		cout << (char) (i+'a') << " (" << a[i] << ")	: ";
		for(j=0;j<a[i];j++)
			cout << "*";
		cout << "\n"; 
	}
	return 0;
}
