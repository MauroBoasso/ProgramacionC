#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float A,contA;
	
	
	for (int i =1; i<11; i++){
		cin >> A;	
		
		if (A <0 || A>10)
			cout << "nota invalida" << endl;
			
		
		if (A >=0 || A<=10)
			contA+=1;
	}
	cout << "media = " << contA << endl;
	return 0;
}

