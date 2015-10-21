#include <iostream>
#include <locale>
using namespace std;

#define COMPRIMENTO 20

int quantidade_vogais(char a[], int b) {

	int contador = 0;

	for (int i = 0; i < b; i++) {
		switch (a[i]) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			contador++;
			break;
		}
	}

	return contador;

}

int main() {

	setlocale(LC_ALL, "");

	char letras[COMPRIMENTO] = { '\0' };
	int quantidade = 0;
	int contador1 = 0;

	cout << "Você deseja digitar quantas letras?(Até " << COMPRIMENTO << " letra(s))";
	cin >> quantidade;

	for (int i = 0; i < quantidade; i++) {
		contador1++;
		cout << "Digite as letras(" << contador1 << " de " << quantidade << "):";
		cin >> letras[i];
	}

	system("cls");

	cout << "A quantidade de vogais digitadas é:" << quantidade_vogais(letras, quantidade) << endl;

	system("pause");
	return 0;

}
