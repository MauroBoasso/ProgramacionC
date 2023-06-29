#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double A, B, C,aux;
	cin >> A >> B >> C;
	if (A<B){
		aux=A;
		A=B;
		B=aux;
	}
	if (B<C){
		aux=B;
		B=C;
		C=aux;
	}
	if (A<B){
		aux=A;
		A=B;
		B=aux;
	}
	if (A >= (B + C)) {
		cout << fixed << setprecision(1) << "NAO FORMA TRIANGULO" << endl;
	}
	else{
		if ((A*A)==((B*B)+(C*C)))
			cout << fixed << setprecision(1) << "TRIANGULO RETANGULO" << endl;
		else{
			if((A*A)>((B*B)+(C*C)))
				cout << fixed << setprecision(1) << "TRIANGULO OBTUSANGULO" << endl;
			
			else{
				if((A*A)<(B*B)+(C*C))
					cout << fixed << setprecision(1) <<  "TRIANGULO ACUTANGULO" << endl;
			}
		}
		if ((A==B) && (A==C)){
			cout << fixed << setprecision(1) << "TRIANGULO EQUILATERO" << endl;
		}
		else{
			if ((A==B) || (A==C) || (B==C))
				cout << fixed << setprecision(1) << "TRIANGULO ISOSCELES" << endl;
		}
	}
	return 0;
}

