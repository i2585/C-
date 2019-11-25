#include <iostream>

using namespace std;

int main(){
	int sum=0;
	int *p = new int [5];
	cout << "정수 5개 입력>>";
	for(int i=0;i<5;i++){
		cin >> p[i];
		sum = sum + p[i];
	}
	cout << "평균 " << (double) sum/5;
	delete [] p;
	return 0;
}
