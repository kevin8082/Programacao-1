#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double num1 = 0.0;
	double num2 = 0.0;
	double Soma = 0.0;
	double Produto = 0.0;
	double Media = 0.0;

	cout << "Digite 2 números separados por um espaço:";
	cin >> num1 >> num2;

	Soma = num1 + num2;

	Produto = num1 * num2;

	Media = Soma / 2;

	cout << "A soma é:" << Soma << endl;
	cout << "O produto é:" << Produto << endl;
	cout << "A Média é:" << Media << endl;

	system("pause");

}
