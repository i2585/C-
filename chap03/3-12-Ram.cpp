#include <iostream>
#include "3-12-Ram.h"
using namespace std;

Ram :: Ram(){
	size = 100*1024;
	mem[size] = {0};
}
Ram :: ~Ram(){
	cout << "�޸� ���ŵ�";
}
void Ram :: write(int address, char value){
	mem[address]=value;
}
char Ram :: read(int address){
	return mem[address];
}
