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
		int index = (rand())%(s.length());
		while(true){
			if(s[index]==' '||s[index]==','||s[index]=='\''||s[index]=='.')
				index = (rand())%(s.length());
			else
				break;
		}
		if(s[index]>='A'&&s[index]<='Z')
			s[index]=(char) ((rand()%26)+65);
		else if(s[index]>='a'&&s[index]<='z')
			s[index]=(char) ((rand()%26)+97);
		cout << s << "\n";
	}
	return 0;
}
