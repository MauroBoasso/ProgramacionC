#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i, n=0, x;
	for (i=0;i<5; i++){
		cin >> x;
		if(x%2==0){
			n++;
		}
	}
	cout << n << " valores pares" << endl;
	return 0;
}

