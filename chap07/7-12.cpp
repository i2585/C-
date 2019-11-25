#include <iostream>
using namespace std;

class SortedArray{
	int size;
	int *p;
	void sort();
	public :
		SortedArray(){
			p = NULL;
			size = 0;
		}
		SortedArray(SortedArray& src){
			this -> size = src.size;
			this -> p = new int [size];
			for(int i=0;i<size;i++)
				this->p[i]=src.p[i];
		}
		SortedArray(int p[], int size){
			this -> size = size;
			this -> p = new int [size];
			for(int i=0;i<size;i++)
				this->p[i]=p[i];
		}
		~SortedArray(){
			delete [] p;
		}
		SortedArray operator + (SortedArray& op2){
			SortedArray tmp;
			tmp.size = size + op2.size;
			tmp.p = new int [size];
			for(int i=0;i<size;i++)
				tmp.p[i]=this->p[i];
			for(int i=0;i<op2.size;i++)
				tmp.p[size+i]=op2.p[i];
			return tmp;
		}
		SortedArray& operator = (const SortedArray& op2){
			delete [] p;
			this -> p = new int [op2.size];
			this -> size = op2.size;
			for(int i=0;i<op2.size;i++)
				this->p[i]=op2.p[i];
			return *this;
		}
		void show(){
			sort();
			cout << "배열 출력 : ";
			for(int i=0;i<size;i++){
				cout << p[i] << ' ';
			}
			cout << endl;
		}
};
void SortedArray :: sort(){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(p[i]>p[j]){
				int tmp = p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
		}
	}
}
int main(){
	int n[] = {2, 20, 6};
	int m[] = {10, 7, 8, 30};
	SortedArray a(n,3), b(m,4), c;
	
	c = a+b;
	
	a.show();
	b.show();
	c.show();
}
