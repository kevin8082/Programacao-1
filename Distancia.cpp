#include <iostream>;
#include <locale>;
#include <math.h>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double x1 = 0.0;
	double y1 = 0.0;
	double x2 = 0.0;
	double y2 = 0.0;
	double Distancia = 0.0;

	cout << "Digite x1:";
	cin >> x1;

	cout << "Digite y1:";
	cin >> y1;

	cout << "Digite x2:";
	cin >> x2;

	cout << "Digite y2:";
	cin >> y2;

	Distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	cout << "A distãncia entre os dois pontos é:" << Distancia << endl;

	system("pause");

}
