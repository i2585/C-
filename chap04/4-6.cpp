#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	string s;
	srand((unsigned)time(0));
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << "\n";
	while(true){
		cout << ">>";
		getline(cin, s, '\n');
		if(s=="exit")
			break;
		for(int i=s.length()-1;i>=0;i--)
			cout << s[i];
		cout << "\n";
	}
	return 0;
}
