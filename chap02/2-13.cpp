#include <iostream>
#include <string>
using namespace std;

int main(){
	string name[10][10]={"짬뽕", "짜장", "군만두" };
	int num,num1; 
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while(num!=4){
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> num;
		if(num<=0||num>4)
			cout << "다시 주문하세요!!\n";
		else if(num==4)
			cout << "오늘 영업은 끝났습니다.";
		else{
			cout << "몇인분?"; 
			cin >> num1;
			cout << name[num-1] << " " << num1 << "인분 나왔습니다\n";
		}
	}
	return 0;
}
