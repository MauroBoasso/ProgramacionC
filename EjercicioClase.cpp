#include <iostream>
using namespace std;

int main() {
	int h;//,m,s;
	cout << "Ingrese una hora: ";
	cin >> h;
/*
	minutos = (hora*60);
	segundos = (minutos*60);
	*/
	cout <<  "La hora ingresada equivale a " << (h*60) << "minutos y a" << (h*3600) << " segundos. " << endl; 
	
	
	return 0;
}

