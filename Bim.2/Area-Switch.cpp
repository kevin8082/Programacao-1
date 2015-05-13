#include <iostream>;
#include <locale>;
#include <math.h>;
#define PI 3.1415
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	int Opção = 0.0;
	double Operação = 0.0;
	double Raio = 0.0;
	double Geratriz = 0.0;
	double Altura = 0.0;

	cout << "Escolha uma opção de calculo da área:" << endl;
	cout << "1 para Cone Reto" << endl;
	cout << "2 para Cilindro" << endl;
	cout << "3 para Esfera" << endl;
	cout << "Digite sua opção:";
	cin >> Opção;

	switch (Opção){
	case 1:
		cout << "Digite o valor do Raio e Giratriz respectivamente:";
		cin >> Raio >> Geratriz;
		break;
	case 2:
		cout << "Digite o valor do Raio e da Altura respectivamente:";
		cin >> Raio >> Altura;
		break;
	case 3:
		cout << "Digite o valor do Raio:";
		cin >> Raio;
		break;
	}

	switch (Opção){
	case 1:
		Operação = PI * Raio * (Geratriz * Raio);
		break;
	case 2:
		Operação = 2 * PI * Raio * (Altura + Raio);
		break;
	case 3:
		Operação = 4 * PI * pow(Raio, 2);
		break;
	default:
		cout << "É tão dificil assim de digita 1 número?" << endl;
		break;
	}

	cout << "O resultado é:" << Operação << endl;

	system("pause");

}
