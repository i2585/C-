#include <iostream>
using namespace std;

int main(){
	float num,num1,num2,num3,num4,max;
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> num >> num1 >> num2 >> num3 >> num4;
	max = num;
	if(max < num1)
		max = num1;
	if(max < num2)
		max = num2;
	if(max < num3)
		max = num3;
	if(max < num4)
		max =num4;
	cout << "���� ū �� = " << max;
	return 0; 
}
