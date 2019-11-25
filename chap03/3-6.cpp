#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom{
	public :
		int number;
		EvenRandom();
		int next();
		int nextInRange(int n, int n1);
};
EvenRandom :: EvenRandom(){
	srand((unsigned)time(0));
}
int EvenRandom :: next(){
	number = rand()*2;
	return number;
}
int EvenRandom :: nextInRange(int n, int n1){
	do{
		number = rand() % (n1-1)+n;
	}while(number%2!=0);
	return number;
}
int main(){
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for(int i=0;i<10;i++){
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for(int i=0;i<10;i++){
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}
