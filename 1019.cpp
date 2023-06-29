#include <iostream>
using namespace std;

int main() {
	int N,h(0),m(0),s(0);
	cin >> N;
	h = N / 3600;
	N = N %3600;
	m = N / 60;
	s = N %60;
	cout << h << ":" << m << ":" << s << endl;
	
	return 0;
}

