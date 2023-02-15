#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

//Função calculo do fatorial
int fator(int x)
{
	int f = 1, i;

	for (i = 2; i <= x; i++)
	{
		f = f * i;
	}
	return f;
}
//Função calculo da somatoria
double soma(int n, double x)
{
	int sinal = 1, i, e = 0;
	double s = 0;

	for (i = 1; i <= n; i++)
	{
		s = s + pow(x, e) / fator(e) * (sinal);
		sinal = sinal * (-1);
		e = e + 2;
	}
	return s;
}
//Função principal
int main()
{
	setlocale(LC_ALL, "Portuguese");

	//Variaveis
	double x, cosseno;
	int n;

	//Entrada de n com critica de dados
	do
	{
		cout << "\n Numero de termos(>=1 e <=20): ";
		cin >> n;
	} while (n < 1 || n > 20);

	//Entrada de x
	cout << "\n Valor de X: ";
	cin >> x;

	//chamando a função
	cosseno = soma(n, x);

	//Saida de dados
	cout << "\n Cos(x) = " << cosseno;

	return 0;
}