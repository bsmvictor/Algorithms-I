#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

//Função para calcular o fatorial
int fator(int e)
{
	int i, fat;
	fat = 1;
	//Cálculo do fatorial
	for (i = 2; i <= e; i++)
	{
		fat = fat * i;
	}
	return fat;
}

//Função SX
double SX(double x, int n)
{

	double soma = 0;
	int aux;
	int e = 0;
	int sinal = 1;

	//soma dos termos
	for (aux = 1; aux <= n; aux++)
	{
		//Somando os termos
		soma = soma + pow(x, e) / fator(e) * sinal;

		e = e + 2;

		sinal = sinal * (-1);
	}
	return soma;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//variáveis
	double x, s;
	int n;

	//Crítica de dados para o número de termos
	do
	{
		cout << "\nEntre com o número de termos (1<= n <= 20): ";
		cin >> n;
	} while (n < 1 || n > 20);

	//Entrada do valor de x
	cout << "\nEntre com o valor de x: ";
	cin >> x;

	//chamando a função
	s = SX(x, n);

	//soma dos n primeiros termos da série
	cout << "s(x) = " << s << endl;

	return 0;
}