#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,j,N;
	double ar[]= {100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
	
	cin >> N;
	cout << N << endl;
	
	for (i=0;i< 7;i++){
		j = N/ar[i];
		N = N % ar[i];
	}
	
	
	return 0;
}

