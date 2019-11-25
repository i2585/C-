#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom{
	public :
		int number;
		SelectableRandom();
		int	next();
		int nextInRange(int n, int n1);
};
SelectableRandom :: SelectableRandom(){
	srand((unsigned)time(0));
}
int SelectableRandom :: next(){
	number = rand()*2;
	return number;
}
int SelectableRandom :: nextInRange(int n, int n1){
	do{
		number = rand() % (n1-1)+n;
	}while(number%2==0);
	return number;
}
int main(){
	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for(int i=0;i<10;i++){
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for(int i=0;i<10;i++){
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}
