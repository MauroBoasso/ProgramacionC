#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	
	double p1x, p1y, p2x, p2y, distancia;
	cin >> p1x >> p1y;
	cin >> p2x >> p2y;
	
	distancia = sqrt((p1x-p2x)*(p1x-p2x)+(p1y-p2y)*(p1y-p2y));
	
	cout << fixed << setprecision (4) << distancia << endl;
	
	return 0;
}

