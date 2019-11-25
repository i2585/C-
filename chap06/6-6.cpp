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
	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for(int i=0;i<5;i++){
		cin >> x[i];
	}
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for(int i=0;i<5;i++){
		cin >> y[i];
	}
	cout << "��ģ ���� �迭�� ����Ѵ�\n";
	int s = ArrayUtility2 :: concat(x,y,5);
	for(int i=0;i<10;i++){
		cout << s[i] << ' ';
	}
	int a = ArrayUtility2 :: remove(x,y,5,count);
	cout << "\n�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << count << endl;
	if(count!=0){
		for(int i=0;i<count;i++){
			cout << a[i] << ' ';
		}
	}
}

