#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int M=0,N=0,i,suma=0;
	
	cin >> M >> N;
	for (i=M+1; suma<N; i++){
		int primo=1;
		for(int j=2; j<i;j++){
			if(i%j==0){
			primo=0;
			break;
			}
		}
		if(primo==1){
			suma += i;
		}
		if(primo==1 && suma <N){
			cout << i<< endl;
		}
	
	}
	
	return 0;
}
