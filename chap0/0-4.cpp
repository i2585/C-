#include <iostream>
using namespace std;

int main(){
	
	double num[5],sum=0;
	int i;
	cout << "�Ǽ� 5���Է�>>";
	for(i=0;i<5;i++)
	{
		cin >> num[i];
		sum=sum+num[i];
	}
	for(i=0;i<5;i++)
		cout<<num[i] <<" ";
	cout<<"�� ��� = " << sum/i; 
	return 0;
}
