#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b;
	float l;
	cin >> a >> b;
	
	l = ((b*a)/12.0);
	cout << fixed << setprecision (3) << l << endl;
	return 0;
}

