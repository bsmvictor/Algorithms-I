#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    //variaveis
    int mat[10][10];
    int s, i, j, linhas, colunas;
    int ordem;

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

    //Mostrando diagonal principal
    cout << "\nElementos da diagonal principal: ";
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            if (i == j)
                cout << mat[i][j] << " ";

    //Mostrando diagonal secundaria
    cout << endl;
    cout << "\nElementos da diagonal secundaria: ";
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            if ((i + j) == (ordem - 1))
                cout << mat[i][j] << " ";

    return 0;
}