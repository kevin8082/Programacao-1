#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double Nota1 = 0.0;
	double Nota2 = 0.0;
	double Media = 0.0;

	cout << "Digite as duas notas parciais:";
	cin >> Nota1 >> Nota2;

	Media = (Nota1 + Nota2) / 2;

	if (Media >= 7){
		cout << "Aprovado" << endl;
	}
	else{
		if (Media < 7){
			cout << "Reprovado" << endl;
		}
		else{
			if (Media = 10){
				cout << "Aprovado com Distinção" << endl;
			}
		}
	}

	system("pause");

}
