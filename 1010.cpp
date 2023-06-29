#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int c1, u1, c2, u2;
	float p1, p2, total;
	
	cin >> c1 >> u1 >> p1;
	cin >> c2 >> u2 >> p2;
	
	
	total = (u1*p1)+(u2*p2);
	
	cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
	
	return 0;
}
