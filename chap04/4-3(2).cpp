#include <iostream>
#include <string>
using namespace std;

int main(){
	string text;
	int count=0, index;
	cout << "���ڿ� �Է�>>";
	getline(cin, text, '\n');
	for(index=0;index<text.length();index++){
		index = text.find('a',index);
			count ++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}
