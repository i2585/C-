#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char coffee[100];
	int num,m=0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	while(m<20000){
		cout << "�ֹ�>> ";
		cin >> coffee >> num;
		if(strcmp(coffee, "����������")==0){
			m=m+2000*num;
			cout << 2000*num << "���Դϴ�. ���ְ� �弼��\n";	
		}
		if(strcmp(coffee, "�Ƹ޸�ī��")==0){
			m=m+2300*num;
			cout << 2300*num << "���Դϴ�. ���ְ� �弼��\n";
		}
		if(strcmp(coffee, "īǪġ��")==0){
			m=m+2500*num;
			cout << 2500*num << "���Դϴ�. ���ְ� �弼��\n";
		}
	}
	cout << "���� " << m << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~";
	return 0;
}
