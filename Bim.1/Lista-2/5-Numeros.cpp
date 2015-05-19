#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	double num1 = 0.0;
	double num2 = 0.0;
	double num3 = 0.0;
	double num4 = 0.0;
	double num5 = 0.0;

	cout << "Digite 5 números separados por um espaço:";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	if (num1 <= num2 && num1 <= num3 &&  num1 <= num4 && num1 <= num5){
		cout << "O número " << num1 << " é o menor número." << endl;
	}
	else{
		if (num2 <= num1 && num2 <= num3 &&  num2 <= num4 && num2 <= num5){
			cout << "O número " << num2 << " é o menor número." << endl;
		}
		else{
			if (num3 <= num2 && num3 <= num1 &&  num3 <= num4 && num3 <= num5){
				cout << "O número " << num3 << " é o menor número." << endl;
			}
			else{
				if (num4 <= num2 && num4 <= num3 &&  num4 <= num1 && num4 <= num5){
					cout << "O número " << num4 << " é o menor número." << endl;
				}
				else{
					if (num5 <= num2 && num5 <= num3 &&  num5 <= num4 && num5 <= num1){
						cout << "O número " << num5 << " é o menor número." << endl;
					}
				}
			}
		}
	}

	system("pause");
}
