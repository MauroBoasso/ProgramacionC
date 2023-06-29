#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	
	int X,N[10];

	cin >> X;
	for (int i=0;i<10; i++){
		N[i]=X;
		X*=2;
		cout << "N[" << i << "] = " << N[i] << endl;
	}
	

	
	return 0;
}

