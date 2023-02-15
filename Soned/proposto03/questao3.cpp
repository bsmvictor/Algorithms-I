#include <iostream>

using namespace std;

int main()
{
    //Variaveis
    int a[5], pos[5]; //vetor
    int aux = -1;     //auxiliar
    int n, x;

    //entrada do valor de N
    cout << "\n Insira o valor de N: ";
    cin >> n;

    cout << "\n Insira os elementos do vetor" << endl
         << endl; //quebra de linha dupla apenas por estetica

    //entrada dos elementos do vetor
    for (int i = 0; i < n; i++)
    {
        cout << " A[" << i << "]: ";
        cin >> a[i];
    }

    //entrada do valor de X
    cout << "\n Insira o valor de X: ";
    cin >> x;

    //verificar se x pertence aos elementos do vetor
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            aux++;
            pos[aux] = i;
        }
    }

    //saide de valor de x nao pertence ao vetor
    if (aux == -1)
    {
        cout << "\n X: " << x << " "
             << " Valor nao encontrado" << endl;
    }

    //saide de valor de x pertence ao vetor
    else
    {
        for (int i = 0; i <= aux; i++)
        {
            cout << "\n X: " << x << " "
                 << " Posicao no vetor: ";

            for (int i = 0; i <= aux; i++)
            {
                cout << pos[i] << " ";
            }
        }
    }

    return 0;
}