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
	Circle *p;
	int n; 
	p = new Circle [n];
	int count=0, radius;
	cout << "원의 개수 >> ";
	cin >> n;
		for(int i=0;i<n;i++){
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius; 
		p->setRadius(radius);
		if(p->getArea()>100)
			count++;
	}		
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다";
}
