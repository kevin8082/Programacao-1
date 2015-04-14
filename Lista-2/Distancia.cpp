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

	cout << "Digite x1 e y1 separados por um espaço:";
	cin >> x1 >> y1;

	cout << "Digite x2 e y2 separados por um espaço:";
	cin >> x2 >> y2;

	Distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	cout << "A distãncia entre os dois pontos é:" << Distancia << endl;

	system("pause");

}
