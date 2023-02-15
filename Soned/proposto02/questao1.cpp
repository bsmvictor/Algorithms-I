#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    string nome;
    int nascimento; // (inteiro, >= 1940)
    int ingresso;   // (inteiro, >=1970)
    int idade = 0;
    int trabalhado = 0;
    bool sair = false;

    //Entrada de dados
    cout << " \n Insira seu nome: ";
    getline(cin, nome);

    while (nome.size() < 0 || nome.size() > 50)
    {
        cout << "[NOME INCORRETO]\nRE-ESCREVA O NOME:";

        getline(cin, nome);
    }

    while (!sair)
    {
        cout << "\n Insira seu ano de nascimento (1940 a 2020): ";
        cin >> nascimento;

         while(nascimento < 1940)
         {
             cout << "[DATA INCORRETA]\nREESCREVA SUA DATA DE NASCIMENTO:";
             cin>>nascimento;
         }
        

        cout << "\n Insira seu ano de ingresso na empresa(1970 a 2020): ";
        cin >> ingresso;

        while (ingresso < 1970)
        {
            cout << "[DATA INCORRETO]\nREESCREVA SUA DATA DE INGRESSO:";
            cin>>ingresso;
        }
        

        idade = 2020 - nascimento; //calculo da idade

        trabalhado = 2020 - ingresso; //calculo do tempo de trabalho

        //condição de idade
        if (idade >= 65)
        {
            cout << "\n O funcionário está qualificado" << endl;
        }

        //condição de tempo trabalhado
        else if (trabalhado >= 30)
        {
            cout << "\n O funcionário está qualificado\n"
                 << endl;
        }

        //condição de idade e tempo trabalhado
        else if (idade >= 60 && trabalhado >= 25)
        {
            cout << "\n O funcionário está qualificado" << endl;
        }

        //caso os dados nao se encaixem em nenhuma condição
        else
        {
            cout << "\n O funcionário ainda não está qualificado" << endl;
        }

        cout << " \nInsira seu nome ou digite sair para encerrar o programa: "; //Primeira entrada e dica da flag
        cin.ignore();
        getline(cin, nome); //Nome ou flag

        while (nome.size() < 0 || nome.size() > 50)
        {
            cout << "[NOME INCORRETO]\nRE-ESCREVA O NOME:";

            getline(cin, nome);
        }

        if (nome == "sair") //Ao acionar a flag
        {
            cout << " \n Programa encerrado." << endl;

            sair = true;
        }
    }

    return 0;
}