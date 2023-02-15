#include <iostream>
#include <locale.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    string cont;
    string r2, r3; //respostas para as duas perguntas
    int total = 0; //total de visitantes
    char cod[5]; //codigo do visitante
    bool sair = false; //flag
    int R = 0, C = 0, E = 0, S = 0, O = 0; //contador de respostas

    while (!sair)
    {

        cout << "\n Leitura de dados: " << endl;

        cout << "\n Digite o código: "; //codigo do visitante
        cin >> cod;

        cout << "\n Qual o tipo de consumo: R (residencial) ou C (comercial): ";
        cin >> r2;

        if (r2 == "R") //caso r2 seja igual a R
        {
            R++;
        }

        if (r2 == "C") //caso r2 seja igual a C
        {
            C++;
        }

        cout << "\n Qual a fonte energética usada:  E (elétrica), S (solar) ou O (outras): ";
        cin >> r3;

        if (r3 == "E") //caso r3 seja igual a E
        {
            E++;
        }

        if (r3 == "S") //caso r3 seja igual a S
        {
            S++;
        }

        else if (r3 == "O") //caso r3 seja igual a O
        {
            O++;
        }

        cout << "\n caso deseje encerrar digite 0, ou 1 para seguir : " << endl; //acionamento da flag
        cin.ignore();
        getline(cin, cont);

        if (cont == "0") //Finalizar loop
        {
            sair = true;
        }

        total++; //contador de visitantes
    }

    cout << fixed << setprecision(3); 

    //percentuais de acordo com as respostas
    cout << "\n Consumidores pesquisados: " << total << endl;

    cout << "\n Tipo residencial: " << ((R * 1.0 / total) * 100) << "%" << endl;

    cout << "\n Tipo comercial: " << ((C * 1.0 / total) * 100) << "%" << endl;

    cout << "\n Comércios que usam energia elétrica: " << ((E * 1.0 / total) * 100) << "%" << endl;

    cout << "\n Residenicias que usam energia solar: " << ((S * 1.0 / total) * 100) << "%" << endl;

    return 0;
}