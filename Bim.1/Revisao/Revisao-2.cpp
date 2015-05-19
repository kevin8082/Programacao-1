// Exercício de revisão onde você aceita a entrada de uma letra e um número e calula:
// Se a letra for D então imprime o dobro do número
// Se a letra for Q imprimir o quadrado
// Se a letra for C imprimir o Cubo
// Se não for nenhuma das 3 imprimir "Nada a fazer"

#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double num = 0.0;
	char Letra;
	double Dobro = 0.0;
	double Quadrado = 0.0;
	double Cubo = 0.0;

	cout << "Digite um número e uma letra respectivamente:";
	cin >> num >> Letra;

	Dobro = num * 2;

	Quadrado = pow(num, 2);

	Cubo = pow(num, 3);

	if (Letra == 'd'){
		cout << "O dobro é:" << Dobro << endl;
	}
	else{
		if (Letra == 'q'){
			cout << "O quadrado é:" << Quadrado << endl;
		}
		else{
			if (Letra == 'c'){
				cout << "O cubo é:" << Cubo << endl;
			}
			else{
				cout << "Nada a fazer." << endl;
			}
		}
	}

	system("pause");
	
}
