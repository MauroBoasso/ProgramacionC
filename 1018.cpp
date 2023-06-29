#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,j,N;
	int ar[7]= {100,50,20,10,5,2,1};
	int br[7];
	cin >> N;
	cout << N << endl;
	
	for (i=0;i< 7;i++){
		br[i] = N/ar[i];
		N = N % ar[i];
	}
	for (j=0;j<7;j++){
		cout << br[j] << " nota(s) de R$ " << ar[j] << ",00" << endl; 
	}
	
	return 0;
}

