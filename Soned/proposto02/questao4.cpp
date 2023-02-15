#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    float i, n;
    float s1 = 0, n1 = 0, s2 = 0, n2 = 0, s3 = 0, n3 = 0; //contador de respostas
    float s2s3 = 0, s2n3 = 0;                             //contador de respostas
    float percentual1, percentual2, percentual3, percentual4;
    string resp1, resp2, resp3;

    //Entrada do numero de alunos
    cout << "\n Quantos alunos? ";
    cin >> n;

    //questões a serem feitas aos alunos
    for (i = 1; i <= n; i++)
    {
        cout << "\n Respostas do aluno (" << i << "):" << endl;

        cout << "\n Q1) Você se sente seguro para voltar às aulas presenciais? Sim ou Não?" << endl;
        cin >> resp1;

        if (resp1 == "sim")
        {
            s1++; //seguro
        }

        else if (resp1 == "não" || resp1 == "nao")
        {
            n1++; //não seguro
        }

        cout << "\n Q2) Você pretende voltar às aulas presenciais? Sim ou Não? " << endl;
        cin >> resp2;

        if (resp2 == "sim")
        {
            s2++; //pretende voltar
        }

        else if (resp2 == "não" || resp2 == "nao")
        {
            n2++; //não pretende voltar
        }

        cout << "\n Q3) Você reside em Sta. Rita do Sapucaí? Sim ou Não?" << endl;
        cin >> resp3;

        if (resp3 == "sim")
        {
            s3++; //reside em srs
        }

        else if (resp3 == "não" || resp3 == "nao")
        {
            n3++; //não reside em srs
        }

        if (resp2 == "sim" && resp3 == "sim")
        {
            s2s3++; // reside em srs e pretende voltar
        }

        else if (resp2 == "sim" && resp3 == "não" || resp2 == "sim" && resp3 == "nao")
        {
            s2n3++; //não reside em srs e pretende voltar
        }

        //calculo do percentual
        percentual1 = (s1 * 100) / i;

        percentual2 = (n2 * 100) / i;

        percentual3 = (s2s3 * 100) / i;

        percentual4 = (s2n3 * 100) / i;
    }

    //saida de dados, percentual das respostas
    cout << "\n Alunos que se sentem seguros com a volta das aulas presenciais: " << percentual1 << "%" << endl;

    cout << "\n Alunos que pretendem continuar com as aulas remotas: " << percentual2 << "%" << endl;

    cout << "\n Alunos que residem em SRS e pretendem voltar às aulas presenciais: " << percentual3 << "%" << endl;

    cout << "\n Alunos que não residem em SRS e pretendem voltar às aulas presenciais: " << percentual4 << "%" << endl;

    return 0;
}