#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int i,j,count=0;
	char buf[10000];
	int a[30]={0}; 
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
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
	cout << "�� ���ĺ� �� " << count << "\n";
	cout << "\n";
	for(i=0;i<26;i++){
		cout << (char) (i+'a') << " (" << a[i] << ")	: ";
		for(j=0;j<a[i];j++)
			cout << "*";
		cout << "\n"; 
	}
	return 0;
}
