#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player{
	string name;
	public :
		void setName();
		string getName();
};
void Player :: setName(){
	getline(cin, name); 
}
string Player :: getName(){
	return name;
}
class GamblingGame{
	Player *p;
	string n;
	public :
		GamblingGame();
		~GamblingGame();
		void start();
};
GamblingGame :: GamblingGame(){
	p = new Player [2];
	srand((unsigned)time(0));
}
GamblingGame :: ~GamblingGame(){
	delete [] p;
}
void GamblingGame :: start(){
	cout << "***** 겜블링 게임을 시작합니다. *****\n";
	for(int i=0;i<2;i++){
		if(i==0)
			cout << "첫번째 선수 이름>>";
		else
			cout << "두번째 선수 이름>>";
		p[i].setName();
	}
	int i=0;
	int num[3];
	while(true){
		cout << p[i].getName() << ":<Enter>";	
		getline(cin,n);
		for(int j=0; j<3; j++){
			num[j]=rand()%3;
			cout << "	" << num[j] << "	";
		}
		if(num[0]==num[1]&&num[1]==num[2]){
			cout << p[i].getName() << "님 승리!!\n";
			break;
		}
		else
			cout << "아쉽군요!\n";	
		i++;
		if(i==2)
			i=0;
	}
}
int main(){
	GamblingGame g;
	g.start();
}
