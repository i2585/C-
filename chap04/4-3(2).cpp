#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	int count=0, index;
	cout << "문자열 입력>>";
	getline(cin, text, '\n');
	for(index=0;index<text.length();index++){
		index = text.find('a',index);
			count ++;
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}
