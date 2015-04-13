#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double Valor_Compra = 0.0;
	double Taxa_Juros = 0.0;
	double Meses = 0.0;
	double Montante = 0.0;

	cout << "Digite o valor da compra:";
	cin >> Valor_Compra;

	cout << "Digite a taxa de juros:";
	cin >> Taxa_Juros;

	cout << "Digite a quantidade de meses:";
	cin >> Meses;

	Montante = Valor_Compra * pow((1 + (Taxa_Juros / 100)), Meses);

	if (Taxa_Juros > 2){
		cout << "NÃO FAÇA ISSO!!!" << endl;
	}
	else{
		if (Taxa_Juros <= 2){
			cout << "O valor total a ser pago é: " << Montante << endl;
		}
	}

	system("pause");

}
