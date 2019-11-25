#include <iostream>
#include <string>
using namespace std;

class Date{
	public:
		int year,month,day;
		Date(string s);
		Date(int y, int m, int d);
		int getYear();
		int getMonth();
		int getDay();
		void show();
};
Date :: Date(int y, int m, int d){
	year = y;
	month = m;
	day =d;
}
Date :: Date(string s){
	year = stoi(s.substr(0,4));
	month = stoi(s.substr(5,2));
	if(s.length()>9)
		day = stoi(s.substr(8,2));
	else
		day = stoi(s.substr(7,2));
}
int Date :: getYear(){
	return year;
}
int Date :: getMonth(){
	return month;
}
int Date :: getDay(){
	return day;
}
void Date :: show(){
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}
int main(){
	Date brith(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << brith.getYear() << ',' << brith.getMonth() << ',' << brith.getDay() << endl;	
}
