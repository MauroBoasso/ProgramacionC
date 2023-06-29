#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int n=0,cann=0,sumn=0,may,men,cantm,cantM,i=1;
	
	do{
		cin>>n;
		if(n==-1)break;
		
		cann++;
		sumn+=n;
		
		if(i==1){
			may=n;
			cantM=1;
			men=n;
			cantm=1;
		}
		else{
			if(n==may)cantM+=1;
			if(n==men)cantm+=1;
			if(n>may){
				may=n;
				cantM=1;
			}
			
			if(n<=men){
				n=men;
				cantm=1;
			}
		}
		i++;
		
	}while(n!=(-1));
	
	if(cann%2==0){
		cout<<fixed<<setprecision(2)<<(float)(sumn/ cann)<<endl;
		cout<<cantM;
	}
	else{
		cout<<abs(may-men)<<endl;
		cout<<cantm;
	}
	return 0;
}
