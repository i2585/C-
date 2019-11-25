#include <iostream>
#include <cstring>

using namespace std;

class Histogram{
	string text;
	char t;
	public :
		Histogram(string text);
		void put(string text);
		void putc(char t);
		void print();
};
Histogram :: Histogram(string text){
	this -> text = text; 
	cout << text << endl;
}
void Histogram :: put(string text){
	this -> text += text;
	cout << text;
}
void Histogram :: putc(char t){
	this -> text += t;
	cout << t;
}
void Histogram :: print(){
	int i,j,count=0;
	int a[30]={0}; 
	for(i=0;i<text.length();i++){
		if(isalpha(text[i])!=0){
			if('A'<=text[i]&&'Z'>=text[i])
				text[i]=tolower(text[i]);
			for(j=0;j<26;j++){
				if(text[i]==(j+'a')){
					a[j]++;
					count++; 
				}
			}
		}
	}
	cout << "\n\nÃÑ ¾ËÆÄºª ¼ö " << count << "\n";
	cout << "\n";
	for(i=0;i<26;i++){
		cout << (char) (i+'a') << " (" << a[i] << ")	: ";
		for(j=0;j<a[i];j++)
			cout << "*";
		cout << "\n"; 
	}
}
int main(){
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}
