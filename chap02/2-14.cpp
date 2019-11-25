#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char coffee[100];
	int num,m=0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	while(m<20000){
		cout << "주문>> ";
		cin >> coffee >> num;
		if(strcmp(coffee, "에스프레소")==0){
			m=m+2000*num;
			cout << 2000*num << "원입니다. 맛있게 드세요\n";	
		}
		if(strcmp(coffee, "아메리카노")==0){
			m=m+2300*num;
			cout << 2300*num << "원입니다. 맛있게 드세요\n";
		}
		if(strcmp(coffee, "카푸치노")==0){
			m=m+2500*num;
			cout << 2500*num << "원입니다. 맛있게 드세요\n";
		}
	}
	cout << "오늘 " << m << "원을 판매하여 카페를 닫습니다. 내일 봐요~~";
	return 0;
}
