#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	//var
	string c1, c2, c3;
	//datos
	cin >> c1 >> c2 >> c3;
	//operar
	if(c1 == "vertebrado"){
		if(c2 == "ave"){
			if(c3 == "carnivoro"){
				cout << "aguia" << endl;
			}
			if(c3 == "onivoro"){
				cout << "pomba" << endl;
			}}
		if(c2 == "mamifero"){
			if(c3 == "onivoro"){
				cout << "homem" << endl;
			}
			if(c3 == "herbivoro"){
				cout << "vaca" << endl;
			}
		}}
	if(c1 == "invertebrado"){
		if(c2 == "inseto"){
			if(c3 == "hematofago"){
				cout << "pulga" << endl;
			}
			if(c3 == "herbivoro"){
				cout << "lagarta" << endl;
			}
		}
		if(c2 == "anelideo"){
			if(c3 == "hematofago"){
				cout << "sanguessuga" << endl;
			}
			if(c3== "onivoro"){
				cout << "minhoca" << endl;
			}
		}
	}
	return 0;
}
