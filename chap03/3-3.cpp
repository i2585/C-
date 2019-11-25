#include <iostream>
#include <string>
using namespace std;

class Account{
	public :
		string name;
		int id,balance;
		Account(string s, int i, int m);
		Account(int m);
		string getOwner();
		void deposit(int m1);
		int withdraw(int m1);
		int inquiry();
};
Account :: Account(string s, int i, int m){
	name=s;
	id=i;
	balance=m;
}
void Account :: deposit(int m1){
	balance=balance+m1;
}
int Account :: withdraw(int m1){
	balance=balance-m1;
}
string Account :: getOwner(){
	return name;
}
int Account :: inquiry(){
	return balance;
}
int main(){
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}
