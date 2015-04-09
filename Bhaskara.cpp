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
	double Bhaskara1 = 0.0;
	double Bhaskara2 = 0.0;

	cout << "Digite A:";
	cin >> a;

	cout << "Digite B:";
	cin >> b;

	cout << "Digite C:";
	cin >> c;

	Delta = pow(b, 2) - 4 * a * c;

	Bhaskara1 = ((-b) + sqrt(Delta)) / (2 * a);

	Bhaskara2 = ((-b) - sqrt(Delta)) / (2 * a);

	if (Delta > 0){
		cout << "X1 é:" << Bhaskara1 << endl;
		cout << "X2 é:" << Bhaskara2 << endl;
	}
	else{
		if (Delta < 0){
			cout << "A resposta é uma raiz imaginária e não será resolvida" << endl;
		}
	}

	system("pause");

}
