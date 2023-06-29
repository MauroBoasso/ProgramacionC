#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i, n=0;
	double a;
	
	for (i = 1; i<= 6; i= i + 1){
		cin >> a;
		if (a > 0)
			n = n + 1;
	}
	cout << n << " valores positivos" << endl;
	
	return 0;
}

