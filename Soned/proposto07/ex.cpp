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

    //entrada do valor de linhas
    do
    {
        cout << "n de linhas: ";
        cin >> linhas;
    } while (linhas < 1 || linhas > 10);

    //entrada do valor de colunas
    do
    {
        cout << "n de colunas: ";
        cin >> colunas;
    } while (colunas < 1 || colunas > 10);

    //entrada dos valores da Matriz
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
        {
            cout << "Matriz "
                 << "[" << i << "]"
                 << " "
                 << "[" << j << "]: ";
            cin >> mat[i][j];
        }

    //mostrando valores da linhas e colunas
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            cout << mat[i][j] << "\t";
        cout << endl;
    }

    //mostrando a soma das linahs e colunas
    for (i = 0; i < linhas; i++)
    {
        s = 0;
        for (j = 0; j < colunas; j++)
            s = s + mat[i][j];

        cout << " soma linha " << i << ": " << s << endl;
    }
    return 0;
}

//soma de matrizes apenas se linhas e colunas forem iguais
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    double a[5][5], b[5][5], c[5][5];
    int s, i, j;
    int linhasa, colunasa, linhasb, colunasb, linhasc, colunasc;

    //entrada do valor de linhas A
    do
    {
        cout << "n de linhas A: ";
        cin >> linhasa;
    } while (linhasa < 1 || linhasa > 10);

    //entrada do valor de colunas A
    do
    {
        cout << "n de colunas A: ";
        cin >> colunasa;
    } while (colunasa < 1 || colunasa > 10);

    //entrada dos valores da Matriz A
    for (i = 0; i < linhasa; i++)
        for (j = 0; j < colunasa; j++)
        {
            cout << "Matriz "
                 << "[" << i << "]"
                 << " "
                 << "[" << j << "]: ";
            cin >> a[i][j];
        }

    //entrada do valor de linhas B
    do
    {
        cout << "n de linhas B: ";
        cin >> linhasb;
    } while (linhasb < 1 || linhasb > 10);

    //entrada do valor de colunas B
    do
    {
        cout << "n de colunas B: ";
        cin >> colunasb;
    } while (colunasb < 1 || colunasb > 10);

    //entrada dos valores da Matriz B
    for (i = 0; i < linhasb; i++)
        for (j = 0; j < colunasb; j++)
        {
            cout << "Matriz "
                 << "[" << i << "]"
                 << " "
                 << "[" << j << "]: ";
            cin >> b[i][j];
        }

    //somando as matrizes
    if (linhasa == linhasb && colunasa == colunasb)
    {
        for (i = 0; i < linhasa; i++)
            for (j = 0; j < colunasa; j++)
                c[i][j] = a[i][j] + b[i][j];
        cout << "Matriz C: " << endl;

        for (i = 0; i < linhasa; i++)
        {
            for (j = 0; j < colunasa; j++)
                cout << c[i][j] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "impossible to calculate matriz!" << endl;
    }

    return 0;
}