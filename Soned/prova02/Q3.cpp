#include <iostream>
#include <string.h>

using namespace std;

//Função da barraca
struct barraca
{
	//variaveis
	char nome[40];
	double peso;
	double preco;
};

//função principal
int main()
{
	//variaveis
	int nb = 0;	   //numero de barracas
	int flag;	   //flag
	double pt = 0; // preço total
	double media;
	barraca b[50];

	while (flag != 1)
	{
		//entrada do nome da barraca
		cout << "\nNome da barraca: ";
		cin.getline(b[nb].nome, 40);

		//entrada do peso da barraca
		cout << "\nPeso da porcao: ";
		cin >> b[nb].peso;

		//entrada do preço da barraca
		cout << "\nPreco da porcao: ";
		cin >> b[nb].preco;

		//preço total
		pt = pt + b[nb].preco;

		nb++;

		//flag
		cout << "\nDigite 1 para sair, ou 0 para continuar!" << endl;
		cin >> flag;
		cin.ignore();
	}

	//calculo da media
	media = pt / nb;

	cout << "\nPreco medio: " << media << endl;

	//mostrando barracas com preço abaixo da media
	cout << "\nBarracas com preco abaixo da media: ";
	for (int i = 0; i < nb; i++)
	{
		if (b[i].preco <= media)
			cout << b[i].nome << " ";
	}

	return 0;
}