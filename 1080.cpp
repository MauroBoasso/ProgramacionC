#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num,aux,numAlto=0;
	
	for (int i=1; i<101; i++){
		cin >> num;
		
		if(num>numAlto){
			numAlto=num;
			aux=i;
		}
	}
	cout << numAlto << endl << aux << endl;
	
	return 0;
}

