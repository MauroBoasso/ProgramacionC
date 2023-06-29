#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float N1, N2, N3, N4, K, N5, J;
	cin >> N1 >> N2 >> N3 >> N4;
	K = (N1*0.2)+(N2*0.3)+(N3*0.4)+(N4*0.1);
	
	cout << fixed << setprecision(1) << "Media: " << K << endl;
	
	if (K >= 7.0)
		cout << "Aluno aprovado." << endl;
	
	else if (K < 5.0)
		cout << "Aluno reprovado." << endl;
	
	else{
		cout << "Aluno em exame." << endl;
		
		cin >> N5;
		cout << "Nota do exame: " << N5 << endl;
		J = (K + N5) / 2;
		if (J >= 5.0)
			cout << "Aluno aprovado." << endl;
		
		else 
			cout << "Aluno reprovado." << endl;
		
		cout << "Media final: " << J << endl;
	}
	
	return 0;
}

