#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	char name [30];
	float sa;
	double se, TOTAL;
	gets (name);
	cin >> sa >> se;
	TOTAL = (sa + ((se*15)/100));
	cout << fixed << setprecision(2) << "TOTAL = R$ " << TOTAL << endl;
	
	return 0;
}

