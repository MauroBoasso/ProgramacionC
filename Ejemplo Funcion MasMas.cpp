#include <iostream>
using namespace std;

int masmas(int);//por copia
void MasMas(int &);//por referencia
int main(int argc, char *argv[]) {
	int num;
	cout<< "Ingrese el valor" << endl;
	cin >> num;
//(por copia)	cout << masmas(num);
	MasMas(num);//por referencia
	cout << num;
	
	return 0;
}
int masmas(int nro){//por copia
	nro++;
	return nro;
}
void MasMas(int & nro){//por referencia
	nro++;
	
}
