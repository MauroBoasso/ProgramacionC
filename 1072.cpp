#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N,valor;
	int fuera = 0;
	int dentro = 0;
	cin >>N;
	
	for (int i=0;i<N;i++){
		cin >> valor;
		if (valor>=10 && valor <=20){
			dentro++;
		}
		else{
			fuera++;
		}
	}
	cout << dentro << " in" << endl;
	cout << fuera << " out" << endl;
	return 0;
}
