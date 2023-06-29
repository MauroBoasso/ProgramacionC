#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double radio,pi,area;
	
	pi=3.14159;
	
	cin >> radio;
	area= (pi*(radio*radio));
	
	cout << fixed << setprecision (4) << "A=" << area << endl;
	
	
	return 0;
}

