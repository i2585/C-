#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
	public :
		int number;
		Random();
		int next();
		int nextInRange(int n, int n1);
};
Random :: Random(){
	srand((unsigned)time(0));
}
int Random :: next(){
	number = rand();
	return number;
}
int Random :: nextInRange(int n, int n1){
	number = rand() % (n1-1)+n;
	return number;
}
int main(){
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for(int i=0;i<10;i++){
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for(int i=0;i<10;i++){
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}
