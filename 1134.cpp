#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n,al=0,ga=0,di=0;
	
	do {
		cin >> n;
		if(n==1)al++;
		else if(n==2)ga++;
		else if(n==3)di++;
	}while(n!=4);
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << al << endl;
	cout << "Gasolina: " << ga << endl;
	cout << "Diesel: " << di << endl;
	return 0;
}

