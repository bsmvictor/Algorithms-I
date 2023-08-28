#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

//Registro de dados
struct dados
{
    char nome[80];
    char cpf[12];
    int idade;
};

//Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    char busca[12];
    int n = 0;

    dados part[200];

    //Entrada do numero de pessoas a serem cadastradas
    cout << "\n Insira o numero de pessoas: ";
    cin >> n;

    //Repetição para entrada de dados
    for (int i = 0; i < n; i++)
    {
        //Entrada nome
        cin.ignore();
        cout << "\n Insira seu nome: ";

        cin.getline(part[i].nome, 81);

        //Entrada Cpf
        cout << "\n Insira seu Cpf: ";

        cin >> part[i].cpf;

        //Entrada idade
        cout << "\n Insira sua idade, de 10 a 80 anos: ";

        //Critica de idade
        while (part[i].idade < 10 || part[i].idade > 80)
        {
            cin >> part[i].idade;
        }
    }

    //Busca do Cpf desejado
    cout << "\n Insira o Cpf do participante desejado: ";

    cin >> busca;

    //Saida dos dados de busca
    for (int i = 0; i < n; i++)
        if (strcmp(part[i].cpf, busca) == 0)
        {
            cout << "\n Nome: " << part[i].nome << endl;
            cout << " Idade: " << part[i].idade << endl;
        }

        //Caso o cpf nao seja encontrado
        else if (strcmp(part[i].cpf, busca) == 1)
        {
            cout << "\n \tCpf nao encontrado" << endl;
        }

    return 0;
}