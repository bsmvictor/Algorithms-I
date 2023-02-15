#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

//Registro de dados das equipes
struct dados
{
    char nome[31];
    int acertos;
    int erros;
    float tempo;
    float NF;
};

//Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    int n = 0;
    float maior = 0;
    int i;

    dados equipe[10];

    //Entrada do numero de pessoas a serem cadastradas
    cout << "\n Insira o numero de equipes: ";
    cin >> n;

    //Repetição para entrada de dados
    for (i = 0; i < n; i++)
    {
        //Entrada do nome das equipes
        cin.ignore();
        cout << "\n Insira o nome da equipe: ";
        cin.getline(equipe[i].nome, 31);

        //Entrada do numero de acertos com critica de dados
        do
        {
            cout << "\n Insira o numero de acertos: ";
            cin >> equipe[i].acertos;

        } while (equipe[i].acertos < 0 || equipe[i].acertos > 8);

        //Entrada do numero de erros com critica de dados
        do
        {
            cout << "\n Insira o numero de erros: ";
            cin >> equipe[i].erros;

        } while (equipe[i].erros < 0 || equipe[i].erros > 8);

        //Entrada do tempo gasto
        cout << "\n Insira o tempo gasto em minutos: ";
        cin >> equipe[i].tempo;

        //Calculo da nota final
        equipe[i].NF = (5 * equipe[i].acertos) - (2 * equipe[i].erros) + (1 / equipe[i].tempo);
    }

    //Analisar maior nota
    for (i = 0; i < n; i++)
    {
        if (equipe[i].NF > maior)
        {
            maior = equipe[i].NF;
        }
    }

    //saida da equipe vencedora
    cout << "\n Equipe(s) com maior nota: ";
    for (i = 0; i < n; i++)
    {
        if (equipe[i].NF == maior)
        {
            cout << equipe[i].nome << " ";
        }
    }

    return 0;
}