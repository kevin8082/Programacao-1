// Software feito como exercício da faculdade para você poder digitar 3 números e fazer a soma,
//  media aritmética e ver qual é o maior entre eles.
// Feito por Kevin8082

#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	    setlocale(LC_ALL, "");

	    double numero_1 = 0.0;
		double numero_2 = 0.0;
		double numero_3 = 0.0;
		double soma = 0.0;
		double media = 0.0;
		double maior = 0.0;

		cout << "Digite 3 números separados por espaços:";
		cin >> numero_1 >> numero_2 >> numero_3;

		// Soma
		soma = numero_1 + numero_2 + numero_3;

		// Media Airtmetica
		media = soma / 3;

		// Maior
		if (numero_1 >= numero_2 && numero_1 >= numero_3){
			maior = numero_1;
		}
		else{
			if (numero_2 >= numero_1 && numero_2 >= numero_3){
				maior = numero_2;
			}
			else{
				if (numero_3 >= numero_1 && numero_3 >= numero_2)
					maior = numero_3;
			}
		}

		cout << "A soma dos números é:" << soma << endl;
		cout << "A média airtmética entre eles é:" << media << endl;
		cout << "O número " << maior << " é o maior número." << endl;

		system("pause");
}
