#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float n,aux,m(0);
	int i,j(0);
	for (i = 0; i < 6;i++){
		cin >> n;
		if (n > 0){
			m +=n;
			j++;
		}
	}
	aux = m/j;
	cout << fixed << setprecision(1)<< j << " valores positivos" << endl;
	cout << fixed << setprecision(1) << aux << endl;
	
	return 0;
}
