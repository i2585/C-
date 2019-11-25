#include <iostream>
using namespace std;

int main(){
	
	double num[5],sum=0;
	int i;
	cout << "실수 5개입력>>";
	for(i=0;i<5;i++)
	{
		cin >> num[i];
		sum=sum+num[i];
	}
	for(i=0;i<5;i++)
		cout<<num[i] <<" ";
	cout<<"의 평균 = " << sum/i; 
	return 0;
}
