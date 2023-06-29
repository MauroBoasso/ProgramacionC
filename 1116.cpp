#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	int N;
	float X,Y;
	
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> X >> Y;
	
		if (Y == 0)
			cout << "divisao impossivel" << endl;
		else 
			cout << fixed << setprecision(1) <<  (X/Y) << endl;
		
	}
	
	return 0;
}

