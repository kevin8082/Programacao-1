#include <iostream>;
#include <locale>;
#include <math.h>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	double Delta = 0.0;
	double x1 = 0.0;
	double x2 = 0.0;

	cout << "Digite A, B e C separados por um espaço:";
	cin >> a >> b >> c;

	Delta = pow(b, 2) - (4 * a * c);

	x1 = ((-b) + sqrt(Delta)) / (2 * a);

	x2 = ((-b) - sqrt(Delta)) / (2 * a);

	if (Delta >= 0){
		cout << "X1 é:" << x1 << endl;
		cout << "X2 é:" << x2 << endl;
	}
	else{
		if (Delta < 0){
			cout << "A resposta é uma raiz imaginária e não será resolvida" << endl;
		}
	}

	system("pause");

}
