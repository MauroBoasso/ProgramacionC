#include <iostream>
using namespace std;

int main(){
	
	int M, N, aux;
	int suma;

	for(int j=0; j <=100; j++){
		
		cin >> M;
		cin >> N;
		if(M <= 0) break;
		if(N <= 0) break;
		
		if(M > N){
			aux = M;
			M = N;
			N = aux;
		}
		suma = 0;
		for(int i = M; i <= N; i++){
			cout << i << " ";
			suma += i;
		}
		cout << "Sum=" << suma << endl;
	}
	return 0;
}

