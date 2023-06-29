#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[]) {
	
	float X, Y;
	cin >> X >> Y;
	
	if(X==0 && Y==0)
		cout << "Origem" << endl;
	else
		if(Y==0)
		cout << "Eixo X" << endl;
		else 
			if(X==0)
			cout << "Eixo Y" << endl;
			else 
				if (X>0 && Y>0)
					cout << "Q1" << endl;
				else
					if (X<0 && Y>0)
						cout << "Q2" << endl;
					else 
						if (X<0 && Y<0)
							cout << "Q3" << endl;
						else
							if (X>0 && Y<0)
								cout << "Q4" << endl;
						return 0;
}
