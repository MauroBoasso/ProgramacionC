#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	unsigned long long int N, M , Total;
	int j , i , bn , bm; 
	int bN[32] , bM [32],bF[32];
	while (scanf("%llu%llu" , &N , &M)!=EOF){
		Total=0;
		for (i=0 ; i<32 ; i++)
			bN[i]=0;
		for (i=0 ; i<32 ; i++)
			bM[i]=0;
		for (i=0 ; N>0 ; i++){
			bN[i]=N%2;
			N=N/2;
		}
		bn=i-1;
		j=bn;
		for (i=0 ; M>0 ; i++){
			bM[i]=M%2;
			M=M/2;
		}
		bm=i-1;
		if (j<bm)
			j=bm;
		for (i=j ; i>=0 ; i--){
			bF[i]=bN[i]+bM[i];
			if (bF[i]>1)
				bF[i]=0;
		}
		for (i=j ; i>=0 ; i--){
			Total += bF[i] * pow(2,i);
		}
		cout << Total << endl;
	}
	return 0;
}
