#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N,Nc=0;
	char cliente;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>cliente;
		switch(cliente){
		case 'E':Nc++;break;
		case 'N':if(Nc<=4){cout<<"espera"<<endl;
		Nc++;
		}
		else cout<<"no espera"<<endl;
		break;
		case 'F':Nc--;
		}
	}
	return 0;
}

