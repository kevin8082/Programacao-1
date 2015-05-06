#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	char letra;
	double num1 = 0.0;
	double num2 = 0.0;
	double soma = 0.0;
	double multiplicar = 0.0;
	double dividir = 0.0;
	double subtrair = 0.0;

	cout << "Digite 2 números:";
	cin >> num1 >> num2;

	cout << "Suas opções são:" << endl;
	cout << "S para Somar" << endl;
	cout << "M para Multiplicar" << endl;
	cout << "D para Dividir" << endl;
	cout << "X para Subtrair" << endl;
	cout << "Escolha uma letra:";
	cin >> letra;

	soma = num1 + num2;
	multiplicar = num1 * num2;
	dividir = num1 / num2;
	subtrair = num1 - num2;

	switch (letra){
	case 'S':
		cout << "A Soma é:" << soma << endl;
		break;
	case 'M':
		cout << "A Multiplicação é:" << multiplicar << endl;
		break;
	case 'D':
		cout << "A Divisão é:" << dividir << endl;
		break;
	case 'X':
		cout << "A Subtração é:" << subtrair << endl;
		break;
	default:
		cout << "Bicho Burro =.=" << endl;
		break;
	}

	system("pause");

}
