#include <iostream>
#include <cstring>
using namespace std;

class ArrayUtility2{
	public :
		static int concat(int s1[],int s2[],int size){
			int *s = new int[size*2];
			for(int i=0;i<size*2;i++){
				if(i<size)
					s[i]=s1[i];
				else
					s[i]=s2[i-size];
			}
			return s;
		}
		static int remove(int s1[],int s2[],int size, int& retSize){
			int *a = new int[size];
			bool *b = new bool[size];
			for(int i=0;i<size;i++){
				b[i]=false;
			}
			for(int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					if(s1[i]==s2[j]){
						b[i]=true;
						break;
					}
				}
				if(b[i]==false)
					retSize++;
			}
			int j=0;
			for(int i=0;i<size;i++){
				if(b[i]!=true){
					a[j]=s1[i];
					j++;
				}
				if(j==retSize)
					break;
			}
			if(retSize==0)
				return NULL;
			else
				return a;
		}
};
int main(){
	int *x = new int [5];
	int *y = new int [5];
	int count = 0;
	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for(int i=0;i<5;i++){
		cin >> x[i];
	}
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for(int i=0;i<5;i++){
		cin >> y[i];
	}
	cout << "합친 정수 배열을 출력한다\n";
	int s = ArrayUtility2 :: concat(x,y,5);
	for(int i=0;i<10;i++){
		cout << s[i] << ' ';
	}
	int a = ArrayUtility2 :: remove(x,y,5,count);
	cout << "\n배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << count << endl;
	if(count!=0){
		for(int i=0;i<count;i++){
			cout << a[i] << ' ';
		}
	}
}

