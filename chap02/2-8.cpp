#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i,j,max=0;
	char name[100];
	char temp[100];
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for(i=1;i<6;i++)
	{
		cin.getline(name, 100, ';');
		cout << i << " : "<< name <<"\n";
		if(max==0)
			max=strlen(name);
		if(max < strlen(name)){
			max=strlen(name);
			strcpy(temp,name);
		}
	}
	cout << "가장 긴 이름은 " << temp;
	return 0;
}

