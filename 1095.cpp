#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,j;
	for (i = 1, j = 80;j >= 0; j -=5,i +=7){
		cout << "I=" << i << " J=" << j << endl;
	}
	return 0;
}

