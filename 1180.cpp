#include <iostream>
#define TAM 10
using namespace std;

int main(int argc, char *argv[]) {
	int N,i,b,p;
	cin >> N;
	int X[TAM];
	
	for (i=0;i<N;i++) {
		cin >> X[i];
		
		if (i==0) {
			b = X[i];
		}
		else if (X[i] < b) {
			b = X[i];
			p=i;
		}
	}
	cout << "Menor valor: " << b << endl<<"Posicao: "<<p<<endl;
	
	return 0;
}
