#include <iostream>
#include <string>

using namespace std;

class Person{
	string name;
	string tel;
	public :
		Person();
		string getName() { return name; }
		string getTel() { return tel; }
		void set(string name, string tel);
};
Person :: Person(){
	name = " "; tel = "000-0000-0000";
}
void Person :: set(string name, string tel){
	this -> name = name;
	this -> tel = tel;
}
int main(){
	Person p[3];
	string n,t;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";
	for(int i=0;i<3;i++){
		cout << "��� " << i+1 << ">> ";
		cin >> n >> t;
		p[i].set(n,t);
	}
	cout << "��� ����� �̸��� ";
	for(int i=0;i<3;i++){
		cout << p[i].getName() << ' '; 
	}
	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> n;
	int i;
	while(i!=3){
		i=0;
		if(n==p[i].getName()){
			cout << "��ȭ ��ȣ�� " << p[i].getTel();
			break;
		}
		else
			i++;
	}
}
