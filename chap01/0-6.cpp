#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size);
void printArray(int *p,int size);
int main(){
	int a[]={1,2,3,4,5};
	int b[]={9,8,7,6,5};
	cout << "배열 a = ";
	printArray(a,5);
	cout << "\n";
	cout << "배열 b = ";
	printArray(b,5);
	cout << "\n";
	swapArray(a,b,5);
	cout << "swapArray() 실행...";
	cout << "\n";
	cout << "배열 a = ";
	printArray(a,5);
	cout << "\n";
	cout << "배열 b = ";
	printArray(b,5);
	cout << "\n";
	return 0;
}
void swapArray(int *p,int *q, int size)
{
	int temp;
	int i;
	for(i=0;i<size;i++)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q++;
	}
}
void printArray(int *p, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout << *(p+i) <<' ';
	}
}
