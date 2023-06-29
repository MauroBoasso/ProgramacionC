#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cantpreg, rtasc,nivel;
	
	cin>>cantpreg>>rtasc;
	
	nivel = (rtasc*100)/cantpreg;
	
	if(nivel>=90){
		cout<<"nivel maximo"<<endl;
	} else if((nivel>=75)and(nivel<90)){
		cout<<"nivel medio"<<endl;
	} else if((nivel<75)and(nivel>=50)){
		cout<<"nivel regular"<<endl;
	} else if(nivel<50){
		cout<<"fuera de nivel"<<endl;
	}
	return 0;
}

