#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    //variaveis
    char nome[100];
    char tam_nome[50];
    float nota, soma = 0;
    float maior = 0;
    int i = 0, tam;

    cin.getline(nome, 100);
    do
    {
        //entrada do nome do filme
        cin >> nota;

        //calculo da media
        soma += nota;

        //livro com maior nota
        if (nota > maior)
        {
            maior = nota;
            strcpy(tam_nome, nome);
        }
        i++;

        //entrada de dados 
        cin.ignore();
        cin.getline(nome, 100);

        //flag para encerrar o programa
    } while (strcmp(nome, "fim") != 0);

    //exibição da media
    cout << fixed << setprecision(1) << "Media: " << soma / i << endl;

    //exibição da maior nota
    cout << "Maior nota: " << tam_nome << endl;

    //exibição do tamanho do nome
    tam = strlen(tam_nome);
    cout << "Tamanho do nome: " << tam << endl;
    return 0;
}