#include <iostream>

using namespace std;

int main(){
	int sum=0;
	int *p = new int [5];
	cout << "���� 5�� �Է�>>";
	for(int i=0;i<5;i++){
		cin >> p[i];
		sum = sum + p[i];
	}
	cout << "��� " << (double) sum/5;
	delete [] p;
	return 0;
}
