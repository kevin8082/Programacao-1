#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double num1 = 0.0;
	double num2 = 0.0;
	double num3 = 0.0;
	double num4 = 0.0;

	cout << "Digite quatro numeros inteiros separados por um espaço:";
	cin >> num1 >> num2 >> num3 >> num4;

	if ( num1 == num2 && num1 == num3 && num1 == num4){
		cout << "Quadrado" << endl;
	}
	else{
		cout << "Não da Quadrado" << endl;
	}

	system("pause");
}
