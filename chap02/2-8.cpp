#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i,j,max=0;
	char name[100];
	char temp[100];
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
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
	cout << "���� �� �̸��� " << temp;
	return 0;
}

