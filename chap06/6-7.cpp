#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
	public :
		static void seed(){
			srand((unsigned)time(0));
		}
		static int nextInt(int min=0, int max=32767){
			return (rand()%100)+1;
		}
		static char nextAlphabet(){
			if(rand()%2==0)
				return (char)(rand()%26)+97;
			else
				return (char)(rand()%26)+65; 
		}
		static double nextDouble(){
			return (double) rand()/RAND_MAX;
		}
};
int main(){
	Random :: seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다\n";
	for(int i=0;i<10;i++)
		cout << Random :: nextInt(1,100) << ' ';
	cout << endl;	
	cout << "알파벳을 랜덤하게 10개를 출력합니다\n";
	for(int i=0;i<10;i++)
		cout << Random :: nextAlphabet() << ' ';
	cout << endl;
	cout << "랜덤한 실수를 10개를 출력합니다\n";
	for(int i=0;i<10;i++){
		cout << Random :: nextDouble() << ' ';
		if(i==4)
			cout << endl;
	}
}
