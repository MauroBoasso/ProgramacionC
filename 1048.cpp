#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float n,b,d;
	int e;
	cin >> n;
	
	if(n >= 0 && n <= 400.00){
		b = ((n*15)/100);
		d = (n+b);
		e = 15;
	}
	else if (n >= 400.01 && n <= 800.00){
		b = ((n*12)/100);
		d = (n+b);
		e = 12;
	}
	else if (n >= 800.01 && n <= 1200.00){
		b = ((n*10)/100);
		d = (n+b);
		e = 10;
	}
	else if (n >= 1200.01 && n <= 2000.00){
		b = ((n*7)/100);
		d = (n+b);
		e = 7;
	}
	else if(n > 2000){
		b = ((n*4)/100);
		d = (n+b);
		e = 4;
	}
	cout << fixed << setprecision(2) << "Novo salario: " << d << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << b << endl;
	cout << fixed << setprecision(2) << "Em percentual: " << e << " %" << endl;
	return 0;
}

	
