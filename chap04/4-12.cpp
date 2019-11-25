#include <iostream>
#include <string>

using namespace std;

class Circle{
	int radius;
	string name;
	public :
		void setCircle(string name, int radius);
		double getArea();
		string getName();
};
void Circle :: setCircle(string name, int radius){
	this -> name = name;
	this -> radius = radius;
}
double Circle :: getArea(){
	return 3.14*radius*radius;
}
string Circle :: getName(){
	return name;
}
class CircleManager{
	Circle *p;
	int size,radius,s;
	string name;
	public :
		CircleManager(int size);
		~CircleManager();
		void searchByName();
		void searchByArea();
};
CircleManager :: CircleManager(int size){
	this -> p = new Circle [size];
	for(int i=0;i<size;i++){
		cout << "�� " << i+1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name,radius);
	} 
}
CircleManager :: ~CircleManager(){
	delete [] p;	
}
void CircleManager :: searchByName(){
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for(int i=0;i<size;i++){
		if(p[i].getName()==name){
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << "\n";
			break;
		}
	}
}
void CircleManager :: searchByArea(){
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> s;
	cout << s << "���� ū ���� �˻��մϴ�." << endl;
	for(int i=0;i<size;i++){
		if(s<p[i].getArea())
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
	}	
}
int main(){
	int n;
	cout << "���� ���� >> ";
	cin >> n;
	CircleManager c(n);
	c.searchByName();
	c.searchByArea();
}
