#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x ,y ;
	cin>>x>>y;
	if (y>x){
		int aux = x;
		x=y;
		y=aux;
		
	}
	for(int i=y;i<x;i++){
		if(i%5==2||i%5==3){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
