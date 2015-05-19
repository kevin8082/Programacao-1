#include <iostream>;
#include <locale>;
#include <math.h>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	char Opção;
	double Operação = 0.0;
	double Num1 = 0.0;
	double Num2 = 0.0;

	cout << "Suas opções são:" << endl;
	cout << "A para Soma" << endl;
	cout << "B para Subtração" << endl;
	cout << "C Para Multiplicação" << endl;
	cout << "D para Divisão" << endl;
	cout << "E para Radiciação" << endl;
	cout << "F para Potenciação" << endl;
	cout << "G para Modulo" << endl;
	cout << "H para Seno" << endl;
	cout << "I para Cosseno" << endl;
	cout << "J para Tangente" << endl;
	cout << "Sua opção é :";
	cin >> Opção;

	switch (Opção){
	case 'A':
		cout << "Digite 2 números para realizar a operação:";
		cin >> Num1 >> Num2;
		Operação = Num1 + Num2;
	break;
	case 'B':
		cout << "Digite 2 números para realizar a operação:";
		cin >> Num1 >> Num2;
		Operação = Num1 - Num2;
	break;
	case 'C':
		cout << "Digite 2 números para realizar a operação:";
		cin >> Num1 >> Num2;
		Operação = Num1 * Num2;
	break;
	case 'D':
		cout << "Digite 2 números para realizar a operação:";
		cin >> Num1 >> Num2;
		Operação = Num1 / Num2;
	break;
	case 'E':
		cout << "Digite o número para realizar a operação:";
		cin >> Num1;
		Operação = sqrt(Num1);
	break;
	case 'F':
		cout << "Digite o número e o expoente para realizar a operação:";
		cin >> Num1 >> Num2;
		Operação = pow(Num1, Num2);
	break;
	case 'G':
		cout << "Digite o número para realizar a operação:";
		cin >> Num1;
		Operação = abs(Num1);
	break;
	case 'H':
		cout << "Digite o número para realizar a operação:";
		cin >> Num1;
		Operação = sin(Num1);
	break;
	case 'I':
		cout << "Digite o número para realizar a operação:";
		cin >> Num1;
		Operação = cos(Num1);
	break;
	case 'J':
		cout << "Digite o número para realizar a operação:";
		cin >> Num1;
		Operação = tan(Num1);
	break;
	}

	cout << "O resultado é:" << Operação << endl;

	system("pause");

}
