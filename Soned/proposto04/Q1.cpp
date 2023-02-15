#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

//Registro de dados do documento
struct dados
{
    char placa[10];
    char renavam[11];
};

//Função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    dados doc[11];

    //Repetição para entrada de dados
    for (int i = 1; i <= 3; i++)
    {
        //Entrada da placa
        cout << "\n Insira sua placa: ";

        cin >> doc[i].placa;

        //Entrada do renavam
        cout << "\n Insira seu Renavam: ";

        cin >> doc[i].renavam;
    }

    //Repetição para apresentar os dados dos documentos de cada carro
    for (int i = 1; i <= 3; i++)
    {
        cout << "\n veículo [" << i << "]" << endl;
        cout << " Placa: " << doc[i].placa << endl;
        cout << " Renavam: " << doc[i].renavam << endl;
    }
    return 0;
}