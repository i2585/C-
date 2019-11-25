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
					cout << "프린트하였습니다.\n";
					availableInk-=pages;
				}
			}
			else{
				cout << "용지가 부족하여 프린트할 수 없습니다.\n";
			}
		}
		void show(){
			cout << getModel() << "  ," << getManufacturer() << " ,남은 종이 " << availableCount << "장 ,남은 잉크 " << availableInk << endl;  
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
					cout << "프린트하였습니다.\n";
					availableToner-=1;
				}
			}
			else{
				cout << "용지가 부족하여 프린트할 수 없습니다.\n";
			}
		}
		void show(){
			cout << getModel() << " ," << getManufacturer() << " ,남은 종이 " << availableCount << "장 ,남은 토너 " << availableToner << endl;
		}
};
int main(){
	InkJetPrinter *I = new InkJetPrinter("Officejet V40","HP",5,10);
	LaserPrinter *L = new LaserPrinter("SCX-6x45","삼성전자",3,20);
	int number, pages;
	char answer;
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
	I->show();
	L->show();
	cout << endl;
	do{
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
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
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> answer;
		cout << endl;
	}while(answer!='n');
}
