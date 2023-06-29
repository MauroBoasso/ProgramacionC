#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int X,Y,n,i,aux,sum(0);
	cin >> X >> Y;
	
	if (X>Y){
		aux = Y;
		Y = X;
		X = aux;
	}
	if (X%2==0) {
		X++;
		n = X;
	}
	else 
		n = X+2;
	for (i = n; i<Y; i+=2){
		sum += i;
	}
	cout<< sum << endl;
	
	
	
	return 0;
}

