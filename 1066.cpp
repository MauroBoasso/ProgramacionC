#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int j(0), n(0), k(0), o(0), x;
	
	for (int i = 0; i < 5; i++){
		
		cin >> x;
		
		if(x%2 == 0)
			k++;
		else o++;
		if(x>0)
			j++;
		else if (x<0)
			n++;
		
	}
	cout << k << " valor(es) par(es)" << endl;
	cout << o << " valor(es) impar(es)" << endl;
	cout << j << " valor(es) positivo(s)" << endl;
	cout << n << " valor(es) negativo(s)" << endl;
	
	return 0;
}

