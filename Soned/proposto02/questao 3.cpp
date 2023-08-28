#include <iostream>
#include <locale.h>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    int idade, grupo, visitantes = 0;
    int A = 0, B = 0, C = 0, D = 0;
    int percentualA, percentualB, percentualC, percentualD;
    string cont;
    bool sair = false;

    //Processamento e saida de dados
    while (!sair)
    {
        //Entrada de dados
        cout << "\n Digite sua idade: ";
        cin >> idade;

        cout << "\n Digite seu grupo de risco ( 1 ou 2 ): ";
        cin >> grupo;

        //Grupos de risco
        switch (grupo)
        {
        case 1:
        {
            if (idade <= 15)
            {
                cout << "\n Melhor opção: Plano A" << endl;
                A++;
            }

            else if (idade > 15 && idade <= 35)
            {
                cout << "\n Melhor opção: Plano A" << endl;
                A++;
            }

            else if (idade > 35 && idade <= 55)
            {
                cout << "\n Melhor opção: Plano B" << endl;
                B++;
            }

            else if (idade > 55)
            {
                cout << "\n Melhor opção: Plano C" << endl;
                C++;
            }
            break;
        }

        case 2:
        {
            if (idade <= 15)
            {
                cout << "\n Melhor opção: Plano A" << endl;
                A++;
            }

            else if (idade > 15 && idade <= 35)
            {
                cout << "\n Melhor opção: Plano B" << endl;
                B++;
            }

            else if (idade > 35 && idade <= 55)
            {
                cout << "\n Melhor opção: Plano C" << endl;
                C++;
            }

            else if (idade > 55)
            {
                cout << "\n Melhor opção: Plano D" << endl;
                D++;
            }
            break;
        }
        }

        visitantes++; //Contar total de visitas

        percentualA = (A * 100) / visitantes; //Percentual plano A

        percentualB = (B * 100) / visitantes; //Percentual plano B

        percentualC = (C * 100) / visitantes; //Percentual plano C

        percentualD = (D * 100) / visitantes; //Percentual plano D

        cout << "\n Caso deseje encerrar, digite sair, ou continuar para seguir: ";
        cin >> cont; //Flag

        if (cont == "sair") //Finalizar loop
        {
            cout << "- - - - - - - -" << endl;
            cout << " Plano A : " << percentualA << "%" << endl;
            cout << " Plano B : " << percentualB << "%" << endl;
            cout << " Plano C : " << percentualC << "%" << endl;
            cout << " Plano D : " << percentualD << "%" << endl;
            cout << "- - - - - - - -" << endl;
            sair = true;
        }
    }

    return 0;
}