#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float A, B, C, x, y, z;
	cin >> A >> B >> C;
	
	x = ((B*B)-4*A*C);
	if (x<0)
		cout << "Impossivel calcular" << endl;
	
	else if (A == 0)
		cout << "Impossivel calcular" << endl;
	
	else {
		y = (-B + sqrt (x)) / (A+A);
		z = (-B - sqrt (x)) / (A+A);
		
		cout << fixed << setprecision(5) << "R1 = " << y << endl;
		cout << fixed << setprecision(5) << "R2 = " << z << endl;
	}
	
	return 0;
}

