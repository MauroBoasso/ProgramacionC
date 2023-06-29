#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N, a(0), m(0), d(0);
	cin >> N;
	a = N / 365;
	N = N % 365;
	m = N / 30;
	d = N % 30;
	
	
	
	cout << a << " ano(s)" << endl;
	cout << m << " mes(es)" << endl;
	cout << d << " dia(s)" << endl;
	
	return 0;
}

