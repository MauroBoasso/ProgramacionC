
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float A, B, MEDIA;
	cin >> fixed >> setprecision(1) >> A >> B;
	MEDIA = ((A*3.5+B*7.5)/11);
	cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;
	
	return 0;
}

