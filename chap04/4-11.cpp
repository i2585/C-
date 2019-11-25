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
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl; 
}
void CoffeeVendingMachine :: run(){
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****\n";
	int number;
	while(true){
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> "; 
		cin >> number;
		if(number == 1){
			if(tong[0].getSize()>0&&tong[1].getSize()>0){
				selectEspresso();
				cout << "���������� �弼��\n";
			}
			else{
				cout << "���ᰡ �����մϴ�.\n";
			}
		}
		else if (number == 2){
			if(tong[0].getSize()>0&&tong[1].getSize()>1){
				selectAmericano();
				cout << "�Ƹ޸�ī�� �弼��\n";
			}
			else{
				cout << "���ᰡ �����մϴ�.\n";
			}
		}
		else if (number == 3){
			if(tong[0].getSize()>0&&tong[1].getSize()>1&&tong[2].getSize()>0){
				selectSugarCoffee();
				cout << "����Ŀ�� �弼��\n";
			}
			else{
				cout << "���ᰡ �����մϴ�.\n";
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









