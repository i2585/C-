#include <iostream>
#include "3-11-Box.h"

using namespace std;

void Box :: draw(){
	for(int n=0; n<height; n++){
		for(int m=0;m<width;m++)
			cout << fill;
		cout << endl;
	}
}
