#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		int A,B,numaux,digitos[10];
		cin >> A >> B; 
		
		while(A!=0 or B!=0){
		for (int i=0; i< 10;i++){
			
			digitos[i]=0;
			
		}	
		for (int numero=A; numero<=B; numero++){
			numaux=numero;
			
		while (numaux !=0){
		digitos[numaux%10]++;
		numaux=numaux/10;
		
		}
		
		}
		
		for (int u=0;u <10; u++){
		cout << digitos[u]<< " ";
			
		}
		cin>>A>>B;
		}
		
	return 0;
}

