#include <iostream>
#include <locale.h>

using namespace std;

//função principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    float mat[51][51];
    int n, i, j;
    int maior = -100;
    int menor = 100;

    //entrada da ordem da matriz
    do
    {
        cout << "\nEntre com a ordem N da matriz:";
        cin >> n;
    } while (n < 2 || n > 50);

    //entrada dos valores de linhas e colunas
    cout << "\nEntre com os valores da matriz" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    //lendo as diagonais principal e secundaria da matriz
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || (i + j) == n - 1)
            {

                if (mat[i][j] > maior)
                    maior = mat[i][j];

                if (mat[i][j] < menor)
                    menor = mat[i][j];
            }
        }
    }

    //mostrando maior e o menor elemento
    cout << "\nMaior elemento: " << maior << endl;
    cout << "\nMenor elemento: " << menor << endl;

    //mostrando posições dos respectivos elementos de maior valor
    cout << "\nPosições do(s) maior(es) valor(es): " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || (i + j) == n - 1)
            {

                if (mat[i][j] == maior)
                    cout << i << " " << j << endl;
            }
        }
    }

    ////mostrando posições dos respectivos elementos de menor valor
    cout << "\nPosições do(s) menor(es) valor(es): " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || (i + j) == n - 1)
            {

                if (mat[i][j] == menor)
                    cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}