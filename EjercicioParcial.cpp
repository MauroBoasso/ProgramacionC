int n=0;
while (n<=3 && n>=97)
	cin >> n;
int arr_X[n];
int arr_Y[n];
int X,Y;
for (int i=0; i<n; i++){
	cin>> X >> Y;
	arr_X[i]=X;
	arr_Y[i]=Y;
}
---------------------------------------------
	int cantidad=0;
for (int i=0; i<n; i++){
	for (j=0; j<n; j++){
		if (arr_X[i]>arr_Y[j])
			cantidad=cantidad+1;
	}
}
return cantidad;
-------------------------------------------------
	int suma=0;
int cantidad=0;
for (int i=0; i<n; i++){
	if (arr_X[i] % 1){
		suma=suma+arr_X[i];
		cantidad=cantidad+1;
	}
	if (arr_Y[i] % 1){
		suma=suma+arr_Y[i];
		cantidad=cantidad+1;
	}
}
if (cantidad != 0)
	return suma / cantidad;
return 0;
-------------------------------------------------------
	if ((n-2)>0){
		cout << existe al menos una dupla para verificar;
		cantidad=0;
	}

for (int i=0; i<n-2; i++){
	if [((((arr_X[i]+arr_Y[i])*(arr_X[i]+arr_Y[i]))-25)==0)
		&& ((((arr_X[i+1]+arr_Y[i+1])*(arr_X[i+1]+arr_Y[i+1]))-25)==0)
		&& ((((arr_X[i+2]+arr_Y[i+2])*(arr_X[i+2]+arr_Y[i+2]))-25)==0)]{
		cantidad=cantidad+1;
	}
}
return cantidad;



