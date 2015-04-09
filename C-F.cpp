#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double F = 0.0;
	double C = 0.0;

	cout << "Digite a temperatura em farenheit:";
	cin >> F;

	C = ((F - 32) / 9) * 5;

	cout << "A temperatura é " << C << "ºC" << endl;

	system("pause");

}
