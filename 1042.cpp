#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,aux,i,j,k;
	cin >> a >> b >> c;
	i = a,
		j = b;
	k = c;
	if (a>b) {
		aux = a; a = b; b = aux;
	}
	if (a>c) {
		aux = a; a = c; c = aux;
	}
	if (b>c) {
		aux = b; b = c; c = aux;
	}
	cout << a << endl << b << endl << c << endl << endl;
	cout << i << endl << j << endl << k << endl;
	return 0;
}

