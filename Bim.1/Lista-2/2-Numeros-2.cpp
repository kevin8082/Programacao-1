#include <iostream>;
#include <locale>;
#include <math.h>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double num1 = 0.0;
	double num2 = 0.0;
	double Area_Retangulo = 0.0;
	double Area_Triangulo_Retangulo = 0.0;
	double Perimetro_Triangulo = 0.0;
	double Perimetro_Retangulo = 0.0;
	double Hipotenusa = 0.0;

	cout << "digite 2 números reais separados por um espaço:";
	cin >> num1 >> num2;

	Hipotenusa = sqrt(pow(num1, 2)+pow(num2, 2));

	Area_Retangulo = num1 * num2;

	Area_Triangulo_Retangulo = (num1 * num2) / 2;

	Perimetro_Triangulo = num1 + num2 + Hipotenusa;

	Perimetro_Retangulo = 2 * (num1 + num2);

	cout << "A área do retângulo é:" << Area_Retangulo << endl;
	cout << "A área do triângulo retângulo é:" << Area_Triangulo_Retangulo << endl;
	cout << "O perímetro do triângulo é:" << Perimetro_Triangulo << endl;
	cout << "O perímetro do retângulo é:" << Perimetro_Retangulo << endl;

	system("pause");

}
