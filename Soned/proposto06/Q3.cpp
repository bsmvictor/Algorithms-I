#include <iostream>

using namespace std;

//Função Maior
double Maior(double vetor[], int n_elementos)
{
	double nmaior = 0;

	for (int i = 0; i < n_elementos; i++)
	{
		if (vetor[i] > nmaior)
			nmaior = vetor[i];
	}

	return nmaior;
}

//Função principal
int main()
{
	//variaveis
	int n, i;
	double vet[5];
	double func;

	//Entrada de dados
	cout << "\n Quantos elementos?: ";
	cin >> n;

	//Estrutura de repetição
	for (i = 0; i < n; i++)
		cin >> vet[i];

	func = Maior(vet, n);

	//Saida de dados
	cout << "Maior elemento: " << func << endl;

	return 0;
}