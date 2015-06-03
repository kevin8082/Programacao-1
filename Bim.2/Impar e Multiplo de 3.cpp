#include <iostream>
#include <locale>
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	int numero = 0;
	int soma = 0;
	int media = 0;
	int contador1 = 0;
	int contador2 = 0;
	int contador3 = 0;

	do{

		cout << "Digite um número inteiro(digite 0 para sair):";
		cin >> numero;

		while (numero % 2 == 1 && numero % 3 == 0 && numero > 0){

			if (numero % 2 != 0){
				contador1++;
			}
			if (numero % 3 == 0){
				contador2++;
			}
			soma = numero + soma;
			numero = -2;
			contador3++;
		}
	} while (numero != 0);

	media = soma / contador3;

	cout << "O total de números impares foi:" << contador1 << endl;
	cout << "O total de números multiplos de 3 que foi digitado foi:" << contador2 << endl;
	cout << "A soma dos números impares e multiplos de 3 é:" << soma << endl;
	cout << "A média aritmética dos números impares e multiplos de 3 é:" << media << endl;

	system("pause");
}
