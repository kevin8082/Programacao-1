#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double Temp = 0.0;

	cout << "Digite a temperatura em Kelvin:";
	cin >> Temp;

	if (Temp > 273 && Temp < 473){
		cout << "A água está líquida." << endl;
	}
	else{
		if (Temp <= 273){
			cout << "A água está sólida." << endl;
		}
		else{
			if (Temp >= 473)
				cout << "A água está Gasosa." << endl;
		}
	}

	system("pause");

}
