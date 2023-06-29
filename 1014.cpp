#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int X;
	double Y,N;
	cin >> X >> Y;
	N= (X/Y);
	cout <<fixed << setprecision(3) << N << " km/l" << endl;
	return 0;
}
