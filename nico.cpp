#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	string A,Compras[1000];
	int C, total,i;
	cin >> C;
	while(C--){
		A="\0";
		total=0;
		while(A!="\n"){
			cin >> A;
			cout << A << endl;
			for(i=0 ; i<1000 ; i++){
				if(Compras[i]==A)break;
				else if(Compras[i]=="\0"){
					Compras[i]=A;
				}
			}
			sort(Compras,Compras+1000);
			for(i=0;i<1000;i++){
				if(Compras[i+1]=="\0"){
					cout << Compras[i] << endl;
					break;
				}
				else cout << Compras[i] << " ";
			}
		}
	}
	return 0;
}

