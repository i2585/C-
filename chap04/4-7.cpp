#include <iostream>
using namespace std;

class Circle{
	int radius;
	public :
		void setRadius(int radius);
		double getArea();
};
void Circle :: setRadius(int radius){
	this -> radius=radius;
}
double Circle :: getArea(){
	return 3.14*radius*radius;
}
int main(){
	Circle array[3];
	int count=0, radius;
		for(int i=0;i<3;i++){
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> radius; 
		array[i].setRadius(radius);
		if(array[i].getArea()>100)
			count++;
	}		
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�";
}
