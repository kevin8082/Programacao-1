#include <iostream>;
#include <locale>;
using namespace std;

void main(void){

	setlocale(LC_ALL, "");

	int Dia = 0;
	int Mês = 0;
	int Ano = 0;
	string Dia_Escrito;
	string Mês_Escrito;

	cout << "Digite o Dia, Mês e Ano respectivamente:";
	cin >> Dia >> Mês >> Ano;

	switch (Dia){
	case 01:
		Dia_Escrito = "Um";
	break;
	case 02:
		Dia_Escrito = "Dois";
	break;
	case 03:
		Dia_Escrito = "Três";
	break;
	case 04:
		Dia_Escrito = "Quatro";
	break;
	case 05:
		Dia_Escrito = "Cinco";
	break;
	case 06:
		Dia_Escrito = "Seis";
	break;
	case 07:
		Dia_Escrito = "Sete";
	break;
	case 8:
		Dia_Escrito = "Oito";
	break;
	case 9:
		Dia_Escrito = "Nove";
	break;
	case 10:
		Dia_Escrito = "Dez";
	break;
	case 11:
		Dia_Escrito = "Onze";
	break;
	case 12:
		Dia_Escrito = "Doze";
	break;
	case 13:
		Dia_Escrito = "Treze";
	break;
	case 14:
		Dia_Escrito = "Quatorze";
	break;
	case 15:
		Dia_Escrito = "Quinze";
	break;
	case 16:
		Dia_Escrito = "Dezesseis";
	break;
	case 17:
		Dia_Escrito = "Dezessete";
	break;
	case 18:
		Dia_Escrito = "Dezoito";
	break;
	case 19:
		Dia_Escrito = "Dezenove";
	break;
	case 20:
		Dia_Escrito = "Vinte";
	break;
	case 21:
		Dia_Escrito = "Vinte e Um";
	break;
	case 22:
		Dia_Escrito = "Vinte e Dois";
	break;
	case 23:
		Dia_Escrito = "Vinte e Três";
	break;
	case 24:
		Dia_Escrito = "Vinte e Quatro";
	break;
	case 25:
		Dia_Escrito = "Vinte e Cinco";
	break;
	case 26:
		Dia_Escrito = "Vinte e Seis";
	break;
	case 27:
		Dia_Escrito = "Vinte e Sete";
	break;
	case 28:
		Dia_Escrito = "Vinte e Oito";
	break;
	case 29:
		Dia_Escrito = "Vinte e Nove";
	break;
	case 30:
		Dia_Escrito = "Trinta";
	break;
	case 31:
		Dia_Escrito = "Trinta e Um";
	break;
	}

	switch (Mês){
	case 01:
		Mês_Escrito = "Janeiro";
		break;
	case 02:
		Mês_Escrito = "Fevereiro";
		break;
	case 03:
		Mês_Escrito = "Março";
		break;
	case 04:
		Mês_Escrito = "Abril";
		break;
	case 05:
		Mês_Escrito = "Maio";
		break;
	case 06:
		Mês_Escrito = "Junho";
		break;
	case 07:
		Mês_Escrito = "Julho";
		break;
	case 8:
		Mês_Escrito = "Agosto";
		break;
	case 9:
		Mês_Escrito = "Setembro";
		break;
	case 10:
		Mês_Escrito = "Outubro";
		break;
	case 11:
		Mês_Escrito = "Novembro";
		break;
	case 12:
		Mês_Escrito = "Dezembro";
		break;
	}

	cout << Dia_Escrito << " de " << Mês_Escrito << " de " << Ano << endl;

	system("pause");
	
}
