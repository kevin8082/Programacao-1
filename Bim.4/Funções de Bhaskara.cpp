#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

bool nulo(double a) {

	if (a == 0){
		return true;
	}
	else{
		return false;
	}

}

bool positivo(double a) {

	if (a >= 0) {
		return true;
	}
	else {
		return false;
	}

}

double delta(double a, double b, double c) {

	double delta = 0;

	delta = (pow(b, 2) - 4 * a * c);

	return delta;

}

double MaiorRaiz(double a, double b, double c) {

	double raiz[2] = { 0 };
	double MaiorRaiz = 0;

	if (positivo(delta(a, b, c)) == true && nulo(a) == false){

		raiz[0] = (-b + sqrt(delta(a, b, c))) / (2 * a);

		raiz[1] = (-b - sqrt(delta(a, b, c))) / (2 * a);

		if (raiz[0] > raiz[1]) {
			MaiorRaiz = raiz[0];
		}
		else {
			MaiorRaiz = raiz[1];
		}

	}

	return MaiorRaiz;

}

int main() {

	setlocale(LC_ALL, "");

	double valores[3] = { 0 };

	cout << "Digite os valores de a, b e c:";
	cin >> valores[0] >> valores[1] >> valores[2];

	if (positivo(delta(valores[0], valores[1], valores[2])) == false){
		cout << "Não foi possível calcular, é uma raiz imaginária." << endl;
	}
	else{
		cout << "A maior raiz é:" << MaiorRaiz(valores[0], valores[1], valores[2]) << endl;
	}

	system("pause");

	return 0;

}
