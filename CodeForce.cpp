#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,n,d = 0 ,e = 0 ,f = 0, t;
	string A;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> a >> b >> c;
		cin >> A;
		for(int i = 0 ; i < A.size() ; i++){
			if(A[i]=='R')d++;
			else if(A[i]=='P')e++;
			else f++;
		}
		
		f=e=d=0;
	}
	return 0;
}

