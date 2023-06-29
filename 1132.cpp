#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int X,Y,cont=0,i;
	cin >> X >> Y;
	if(X>Y){
		for ( i =X; i<=Y;i++){
			if (X%13==0){
				cont+=i;
			}
			
		}
	}
	else if(Y>X){
		for(i=Y;i<=X;i++){
			if(Y%13==0){
				cont+=i;
			}
		}
	
	}
	cout << cont << endl;
	
	return 0;
}

