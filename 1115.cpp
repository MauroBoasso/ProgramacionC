#include <iostream>
#include <cstddef>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int X,Y;
	while (X!= 0 && Y != 0){
		cin >> X >> Y;
	
		if (X>0 && Y>0){
			cout << "primeiro" << endl;
		}
		if (X<0 && Y>0){
			cout << "segundo" << endl;
		}
		if (X<0 && Y<0){
			cout << "terceiro" << endl;
		}
		if (X>0 && Y<0){
			cout << "quarto" << endl;
		}
		
	}

		return 0;
}

