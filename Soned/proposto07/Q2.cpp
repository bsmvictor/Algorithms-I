#include <iostream>

using namespace std;

int main()
{
    //variaveis
    int mat[10][10];
    int i, j, linhas, colunas;
    int ordem;
    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;

    //entrada do valor de linhas
    do
    {
        cout << "Entre com a ordem da matriz: ";
        cin >> ordem;
        linhas = ordem;
        colunas = ordem;
    } while (linhas < 1 || linhas > 10 && colunas < 1 || colunas > 10);

    //entrada dos valores da Matriz
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
        {
            cout << "\nElementos da matriz: ";
            cin >> mat[i][j];
        }

    //mostrando matriz
    cout << "\n Matriz:  " << endl;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            cout << "\t" << mat[i][j] << "  ";
        cout << endl;
    }

    //somando diagonal principal
    cout << "\nSoma da diagonal principal: ";
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            if (i == j)
                soma1 += mat[i][j];
    }
    cout << soma1;

    //Somando elementos acima da diagonal principal
    cout << endl;
    cout << "\nSoma dos elementos acima da diagonal principal: ";
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            if (i < j)
                soma2 += mat[i][j];
    }
    cout << soma2;

    //Somando elementos abaixo da diagonal principal
    cout << endl;
    cout << "\nSoma dos elementos abaixo da diagonal principal: ";
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            if (i > j)
                soma3 += mat[i][j];
    }
    cout << soma3;
    return 0;
}