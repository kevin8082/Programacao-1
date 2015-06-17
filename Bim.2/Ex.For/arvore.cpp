#include <iostream>
#include <locale>
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	int camadas = 0;
	int espaços1 = 0;
	int espaços2 = 0;
	int tronco = 0;
	int asterisco = 1;

	cout << "Digite a quantidade de camadas:";
	cin >> camadas;

	espaços1 = camadas - 1;

	for (int i = 0; i < camadas; i++){

		for (int i = espaços1; i > 0; i--){
			cout << " ";
		}

		for (int i = 0; i < asterisco; i++){
			cout << "*";
		}

		cout << endl;
		asterisco = asterisco + 2;
		espaços1--;

	}

	espaços2 = camadas - 2;
	tronco = camadas - 2;

	for(int i = 0; i < tronco; i++){

		for (int i = 0; i <= espaços2; i++){
			cout << " ";
		}

		cout << "*" << endl;

	}

    system("pause");

}
