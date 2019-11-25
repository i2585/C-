#include <iostream>
using namespace std;

class Shape{
	Shape* next;
protected:
	virtual void draw()=0;
public:
	Shape(){
		next=NULL;
	}
	virtual ~Shape(){
		
	}
	void paint(){
		draw();
	}
	Shape* add(Shape* p){
		this->next = p;
		return p;
	}
	Shape* getNext(){
		return next;
	}
	void setNext(Shape* del){
		this->next=del->getNext();
	}
};
class Circle:public Shape{
protected:
	virtual void draw(){
		cout << "Circle" << endl;
	}		
};
class Rect:public Shape{
protected:
	virtual void draw(){
		cout << "Rectangle" << endl;
	}		
};
class Line:public Shape{
protected:
	virtual void draw(){
		cout << "Line" << endl;
	}		
};
class UI{
public:
	static int menu(){
		int n; 
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> "; 
		cin >> n;
		return n;
	}
	static int Figure(){
		int n;
		cout << "선:1, 원:2, 사각형:3 >> ";
		cin >> n;
		return n;
	}
	static int DeleteIndex(){
		int n;
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cin >> n;
		return n; 
	}
};
class GraphicEditor{
	Shape* pStart;
	Shape* pLast;
	int count;
public:
	GraphicEditor(){
		pStart=NULL;
		count=0;
	}
	void insert(int num){
		switch(num){
			case 1 : 
				if(count==0){
					pStart = new Line();
					pLast = pStart;
				}
				else
					pLast = pLast->add(new Line());
				count++;
				break;
			case 2 : 
				if(count==0){
					pStart = new Circle();
					pLast = pStart;
				}
				else
					pLast = pLast->add(new Circle());
				count++;
				break;
			case 3 : 
				if(count==0){
					pStart = new Rect();
					pLast = pStart;
				}
				else
					pLast = pLast->add(new Rect());
				count++;
				break;
		}
	}
	void deleted(int index){
		Shape* p = pStart;
		Shape* del = pStart;
		if(count>index){
			for(int i=0;i<index;i++){
				p=del;
				del = del->getNext();
			}
			if(index==0)
				pStart = p->getNext();
			else{
				p->setNext(del);
			}
			if(count==2)
				pLast=pStart;
			count--;
			delete del;
		}
		else
			cout << "잘못된 인덱스 입니다.\n";
	}
	void show(){
		Shape* p = pStart;
		while(p != NULL){
			for(int i=0;i<count;i++){
				cout << i << ": ";
				p->paint();
				p = p->getNext();
			}
		}
	}
	void call(){
		cout << "그래픽 에디터입니다.\n";
		while(1){
			int number=UI::menu();
			if(number==1){
				insert(UI::Figure());
			}
			else if(number==2){
				deleted(UI::DeleteIndex());
			}
			else if(number==3){
				show();
			}
			else
				break;
		}
	}
};
int main(){
	GraphicEditor *editor = new GraphicEditor();
	editor -> call();
	delete editor;
}
