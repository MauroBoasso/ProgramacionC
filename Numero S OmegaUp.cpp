#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int N,num,mayor=0,mayora=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num;
		if(i==0){
			mayor=num;
		}
		else{
			if(num>=mayor){
				mayora=mayor;
				mayor=num;
			}
			else if(num>mayora){
				mayora=num;
				
			}
		}
		
	}
	cout<<mayora<<endl;
	return 0;
}

