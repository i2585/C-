#include <iostream>
using namespace std;

class Container{
	int size;
	public :
		Container();
		void fill();
		void consume();
		int getSize();
};
Container :: Container(){
	size = 10;
}
void Container :: fill(){
	size = 10;
}
void Container :: consume(){
	size--;
}
int Container :: getSize(){
	return size;
}
class CoffeeVendingMachine{
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
	public :
		void run();
};
void CoffeeVendingMachine :: fill(){
	for(int i = 0; i<3; i++){
		tong[i].fill();
	}
}
void CoffeeVendingMachine :: selectEspresso(){
	tong[0].consume();
	tong[1].consume();
}
void CoffeeVendingMachine :: selectAmericano(){
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
}
void CoffeeVendingMachine :: selectSugarCoffee(){
	tong[0].consume();
	tong[1].consume();
	tong[1].consume();
	tong[2].consume();
}
void CoffeeVendingMachine :: show(){
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl; 
}
void CoffeeVendingMachine :: run(){
	cout << "***** 커피자판기를 작동합니다. *****\n";
	int number;
	while(true){
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> "; 
		cin >> number;
		if(number == 1){
			if(tong[0].getSize()>0&&tong[1].getSize()>0){
				selectEspresso();
				cout << "에스프레소 드세요\n";
			}
			else{
				cout << "원료가 부족합니다.\n";
			}
		}
		else if (number == 2){
			if(tong[0].getSize()>0&&tong[1].getSize()>1){
				selectAmericano();
				cout << "아메리카노 드세요\n";
			}
			else{
				cout << "원료가 부족합니다.\n";
			}
		}
		else if (number == 3){
			if(tong[0].getSize()>0&&tong[1].getSize()>1&&tong[2].getSize()>0){
				selectSugarCoffee();
				cout << "설탕커피 드세요\n";
			}
			else{
				cout << "원료가 부족합니다.\n";
			}
		}
		else if (number == 4){
			show(); 
		}
		else if (number == 5){
			fill();
		}
		else
			continue;	
	}
}
int main(){
	CoffeeVendingMachine p; 
	p.run();
}









