#include <iostream>
using namespace std;

int main(){
	int i;
	for(int i=1; i<=100; i++){
			cout << i << "	";
		if(i%10==0)
			cout << "\n";
	}
	return 0;
}
