#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int R;
	long double pi = 3.14159,j;
	
	cin >> R;
	
	j= (double)(4.0/3) * pi * R*R*R;
	
	cout << fixed << setprecision (3) << "VOLUME = " << j << endl;
	
	return 0;
}


