// Exercício para calcular o salário de uma pessoa baseado nas horas que trabalhou e o valor por hora e também definir
// o valor a mais de hora extra com um multiplicador de valor para horas extras com uma leve modificação de
// poder colocar quantas horas a trabalhar no total 
// Feito Por Kevin8082

#include <iostream>
using namespace std;

void main(void){

	// Ler Total_Horas
	double Total_Horas;
	cout << "Digite o Total de Horas a Trabalhar:";
	cin >> Total_Horas;

	// Ler Horas_Trabalhadas
	double Horas_Trabalhadas;
	cout << "Digite as Horas Trabalhadas:";
	cin >> Horas_Trabalhadas;

	// Ler Salario_Hora
	double Salario_Hora;
	cout << "Digite o Salario Hora:";
	cin >> Salario_Hora;

	// Ler Multiplicador_Hora_Extra
	double Multiplicador_Hora_Extra;
	cout << "Multiplicador da Hora Extra(use ponto nao virgula):";
	cin >> Multiplicador_Hora_Extra;

	// Hora_Extra
	double Hora_Extra;
	Hora_Extra = Horas_Trabalhadas - Total_Horas;

	// Salario Extra
	double Salario_Extra;
	Salario_Extra = Total_Horas * Salario_Hora;

	// Salário_ Semanal
	double Salario_Semanal;
	Salario_Semanal = Salario_Hora * Horas_Trabalhadas;

	// Salario_Hora_Extra
	double Salario_Hora_Extra;
	Salario_Hora_Extra = Hora_Extra * Multiplicador_Hora_Extra * Salario_Hora;

	// Calculo
	double Salario;
	if (Horas_Trabalhadas > Total_Horas){
		Salario = Salario_Extra + Salario_Hora_Extra;
	}
	else{
		Salario = Salario_Semanal;
	}

	// Imprimir
	if (Horas_Trabalhadas > Total_Horas){
		cout << "Seu Salario e: " << Salario << endl;
		cout << "Horas Extras Trabalhadas: " << Hora_Extra << endl;
	}
	else{
		cout << "Seu Salario e: " << Salario << endl;
	}

	system("pause");
}
