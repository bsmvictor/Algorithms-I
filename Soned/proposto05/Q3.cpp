#include <iostream>

using namespace std;

//Calculo do fatorial
float FAT(float M)
{
    int x = 1;

    for (int i = 2; i <= M; i++)
    {
        x = x * i;
    }

    if (M == 0)
        x = 1;

    return x;
}

//Calculo de C
float COMBINA(float M, float P)
{
    float c;

    c = FAT(M) / (FAT(M - P) * FAT(P));

    return c;
}

//Função principal
int main()
{
    //Variaveis
    int M, P;
    float C;

    //Entrada dos valores de M e P
    do
    {
        cout << "\nDigite um numero M: ";
        cin >> M;
    } while (M < 0);

    do
    {
        cout << "\nDigite um numero P: ";
        cin >> P;
    } while (P < 0);

    //Retorno da função
    C = COMBINA(M, P);

    //Resultados dos cálculos
    if (M < P)
        cout << "\nValor de C = " << 0 << endl;
    else
        cout << "\nValor de C = " << C << endl;

    return 0;
}