#include <iostream>

using namespace std;

class CoffeeMachine{
	public :
		int c,w,s;
		CoffeeMachine();
		CoffeeMachine(int a, int b, int d);
		void drinkEspresso();
		void dirnkAmericano();
		void drinkSugarCoffee();
		void show();
		void fill();
};
CoffeeMachine :: CoffeeMachine(){
	c=5;
	w=10;
	s=6;
}
CoffeeMachine :: CoffeeMachine(int a, int b, int d){
	c=a;
	w=b;
	s=d;
}
void CoffeeMachine :: drinkEspresso(){
	c=c-1;
	w=w-1;
}
void CoffeeMachine :: dirnkAmericano(){
	c=c-1;
	w=w-2;
}
void CoffeeMachine :: drinkSugarCoffee(){
	c=c-1;
	w=w-2;
	s=s-1;
}
void CoffeeMachine :: show(){
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << c << " ��:" << w << "	����:" << s << "\n"; 
}
void CoffeeMachine :: fill(){
	c=10;
	w=10;
	s=10;
}
int main(){
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.dirnkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}
