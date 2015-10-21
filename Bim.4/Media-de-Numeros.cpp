#include <iostream>
#include <locale>
using namespace std;

#define COMPRIMENTO 20

double media(double a[], double b) {

	double soma = 0;
	double media = 0;

	for (int i = 0; i < b; i++){
		soma = a[i] + soma;
	}

	media = soma / b;

	return media;

}

int main() {

	setlocale(LC_ALL, "");

	double numeros[COMPRIMENTO] = { 0 };
	int quantidade = 0;
	int contador1 = 0;

	cout << "Você deseja digitar quantos números?(Até " << COMPRIMENTO << " número(s))";
	cin >> quantidade;

	for (int i = 0; i < quantidade; i++){
		contador1++;
		cout << "Digite os números(" << contador1 << " de " << quantidade << "):";
		cin >> numeros[i];
	}

	system("cls");

	cout << "A média dos números digitados é:" << media(numeros,quantidade) << endl;

	system("pause");
	return 0;

}
