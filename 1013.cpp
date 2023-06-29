#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a,b,c,d;
	cin >> a >> b >> c;
	d = (a+b+abs(a-b))/2;
	d = (d+c+abs(d-c))/2;
	
	cout << d << " eh o maior"<< endl;
	
	return 0;
}

