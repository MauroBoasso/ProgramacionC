#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N,i;
	cin >> N;
	for(i = 1;i < 11; i++){
		cout << i << " x " << N << " = " << (i*N) << endl;
	}
	return 0;
}

