#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	char num[100];
	char *tok;
	int i,a,b;
	for(i=0;i<5;i++){
		cout << "? ";
		cin.getline(num, 100, '\n');
		tok=strtok(num," ");
		a=atoi(tok);
		while(tok!=NULL){
			tok=strtok(NULL," ");
			if(strcmp(tok, "+")==0){
				tok=strtok(NULL," ");
				b=atoi(tok);
				cout << a << " + " << b << " = " << a+b << "\n";
			}if(strcmp(tok, "-")==0){
				tok=strtok(NULL," ");
				b=atoi(tok);
				cout << a << " - " << b << " = " << a-b << "\n";
			}if(strcmp(tok, "*")==0){
				tok=strtok(NULL," ");
				b=atoi(tok);
				cout << a << " * " << b << " = " << a*b << "\n";
			}if(strcmp(tok, "/")==0){
				tok=strtok(NULL," ");
				b=atoi(tok);
				cout << a << " / " << b << " = " << a/b << "\n";
			}if(strcmp(tok, "%")==0){
				tok=strtok(NULL," ");
				b=atoi(tok);
				cout << a << " % " << b << " = " << a%b << "\n";
			}
			tok=strtok(NULL," ");
		}
	}
	return 0;
}
