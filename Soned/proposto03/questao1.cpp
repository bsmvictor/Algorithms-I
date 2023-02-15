#include <iostream>

using namespace std;

int main()
{

    //Variaveis
    int vetor[5], pos[5]; //vetores
    int aux = -1;         //auxiliar

    cout << "\n Insira os elementos do vetor: ";

    //entrada dos elementos do vetor
    for (int i = 0; i < 5; i++)
    {
        cin >> vetor[i];
    }

    //loop para verificar se vetor = 0 ou nao
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] == 0)
        {
            aux++;
            pos[aux] = i;
        }
    }

    //vetor diferente de zero
    if (aux == -1)
    {
        cout << "\n Nenhum elemento zero no vetor" << endl;
    }

    //mostrando as posições do 0 no vetor
    else
    {
        cout << "\n Posicoes: ";
        for (int i = 0; i <= aux; i++)
        {
            cout << pos[i] << " ";
        }
    }

    return 0;
}