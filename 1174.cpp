#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	float arr[100];
	
	for (int i=0; i<100; i++){
		cin >> arr[i];
	}
	for(int j=0; j<100; j++){
		if(arr[j]<=10){
			cout <<  "A["<< j << "] = " << fixed << setprecision(1) << arr[j] << endl;
		}
	}
	
	return 0;
}

