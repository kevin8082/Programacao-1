// Exercício de revisão onde vc aceita a entrada de 1 número inteiro e calcula seu dobro e a área do triangulo com seu dobro se
// o número elevado a terceira for maior que 81

#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	int num = 0.0;
	double Dobro = 0.0;
	double Area_Triangulo = 0.0;

	cout << "Digite um número inteiro:";
	cin >> num;

	Dobro = num * 2;

	Area_Triangulo = (num * Dobro) / 2;

	if (pow(num, 3) > 81){
		cout << "O dobro é:" << Dobro << endl;
		cout << "A área de triângulo é:" << Area_Triangulo << endl;
	}
	else{
		cout << "Não tem nada a fazer aqui" << endl;
	}

	system("pause");
}
