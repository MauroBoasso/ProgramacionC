#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int X;
	float Y,total;
	cin >> X >> Y;
	
	switch(X){
	case 1: total=4*Y;
	break;
	case 2:total=4.5*Y;
	break;
	case 3:total=5.00*Y;
	break;
	case 4:total=2.00*Y;
	break;
	case 5:total=1.5*Y;
	break;
	}
	
	cout <<  "Total: R$ " << fixed << setprecision (2) << total << '\n';
	return 0;
}

