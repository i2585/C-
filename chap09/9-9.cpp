#include <iostream>
#include <string>
using namespace std;

class printer{
	 string model;
	 string manufacturer;
	 protected:
	 	int availableCount;
	 	int printedCount; 
	 public:
	 	printer(string model, string manufacturer, int availableCount){
	 		this -> model = model;
	 		this -> manufacturer = manufacturer;
	 		this -> availableCount = availableCount;
		}
		string getModel(){
			return model;
		}
		string getManufacturer(){
			return manufacturer;
		}
		virtual void print(int pages)=0;
		virtual void show()=0;		
};
class InkJetPrinter : private printer{
	int  availableInk;
	public:
		InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : printer(model,manufacturer,availableCount){
			this -> availableInk = availableInk;
		}
		void print(int pages){
			printedCount=pages;
			if(availableCount-printedCount>=0){
				availableCount-=printedCount;	
				if(availableInk>=pages){
					cout << "����Ʈ�Ͽ����ϴ�.\n";
					availableInk-=pages;
				}
			}
			else{
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			}
		}
		void show(){
			cout << getModel() << "  ," << getManufacturer() << " ,���� ���� " << availableCount << "�� ,���� ��ũ " << availableInk << endl;  
		}
};
class LaserPrinter : private printer{
	int availableToner;
	public:
		LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : printer(model,manufacturer,availableCount){
			this -> availableToner = availableToner;
		}
		void print(int pages){
			printedCount=pages;
			if(availableCount-printedCount>=0){
				availableCount-=printedCount;
				if(availableToner>=pages){
					cout << "����Ʈ�Ͽ����ϴ�.\n";
					availableToner-=1;
				}
			}
			else{
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
			}
		}
		void show(){
			cout << getModel() << " ," << getManufacturer() << " ,���� ���� " << availableCount << "�� ,���� ��� " << availableToner << endl;
		}
};
int main(){
	InkJetPrinter *I = new InkJetPrinter("Officejet V40","HP",5,10);
	LaserPrinter *L = new LaserPrinter("SCX-6x45","�Ｚ����",3,20);
	int number, pages;
	char answer;
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����\n";
	I->show();
	L->show();
	cout << endl;
	do{
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> number >> pages;
		if(number == 1){
			I->print(pages);
			I->show();
			L->show();
		}
		else{
			L->print(pages);
			I->show();
			L->show();
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> answer;
		cout << endl;
	}while(answer!='n');
}
