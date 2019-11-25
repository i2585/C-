#include <iostream>
using namespace std;
int add(int a[]={0},int n=0,int b[]={0}){
	int sum = 0;
	if(b!=0){
		for(int i=0;i<n;i++)
			sum = b[i] + a[i] + sum;
	}
	else{
		for(int i=0;i<n;i++)
			sum = a[i] + sum;
	}
	return sum;
}
int main(){
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};
	int c = add(a,5);
	int d = add(a,5,b);
	cout << c << endl;
	cout << d << endl;
}
