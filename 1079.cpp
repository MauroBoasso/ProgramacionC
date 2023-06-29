#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N;
	float a,b,c,Promedio;
	
		cin >> N;
		for (int i=0; i<N; i++){
			cin >> a >> b >> c;
			Promedio = (a*0.2)+(b*0.3)+(c*0.5);
			cout << fixed << setprecision(1)<< Promedio << endl; 
		}
	
	return 0;
}

