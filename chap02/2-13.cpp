#include <iostream>
#include <string>
using namespace std;

int main(){
	string name[10][10]={"«��", "¥��", "������" };
	int num,num1; 
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while(num!=4){
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> num;
		if(num<=0||num>4)
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		else if(num==4)
			cout << "���� ������ �������ϴ�.";
		else{
			cout << "���κ�?"; 
			cin >> num1;
			cout << name[num-1] << " " << num1 << "�κ� ���Խ��ϴ�\n";
		}
	}
	return 0;
}
