#include <iostream>
using namespace std;

int main(){

	int i,j,num;

	cout << "���� �Է�>>";
	cin >> num; 
	for(i=0;i<num;i++)
	{
		for(j=i;j<num;j++)
			cout<<"*";
		if(i==num-1)
			break;
		else
			cout<<"\n";
	}
	return 0;
}
