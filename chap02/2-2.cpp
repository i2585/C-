#include <iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++)
			cout << j << '*' << i << '=' << j*i << "	";
		cout << "\n";
	}
	return 0;
}
