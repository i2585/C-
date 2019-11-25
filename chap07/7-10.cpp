#include <iostream>
using namespace std;
class Statistics{
	int *arr;
	int index;
	public :
			Statistics(){
				arr = new int [10];
				index = 0;
			}
			~Statistics(){
				delete [] arr;
			}
			bool operator! (){
				if(index==0)	return true;
				else return false;
			}
			void operator~ (){
				for(int i=0;i<index;i++)
					cout << arr[i] << " ";
				cout << endl;
			}
			Statistics& operator<< (int a){
				arr[index]=a;
				index++;
				return *this;
			}
			void operator>> (int &avg){
				for(int i=0;i<index;i++){
					avg=arr[i]+avg;
				}
				avg = avg/index;
			}
};
int main(){
	Statistics stat;
	if(!stat) cout << "현재 통계 데이타가 없습니다." << endl;
	
	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for(int i=0; i<5; i++) cin >> x[i];
	
	for(int i=0; i<5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;
	
	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}
