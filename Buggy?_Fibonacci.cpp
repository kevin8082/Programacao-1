#include <iostream>
using namespace std;

void main(void){

	double num1 = 0;
	double num2 = 1;
	double Fibonacci = 0;

	for (int i = 0; i <= 98; i++){
		Fibonacci = num1 + num2;
		cout.precision(40);
		cout << Fibonacci << endl;
		num1 = num2;
		num2 = Fibonacci;

	}

	system("pause");
}
