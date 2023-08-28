#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    //Variaveis
    float x, y = 0, elev, den = 50;

    //Entrada de dados
    cout << "\n Valor de x: ";
    cin >> x;

    //Processamento e saida de dados
    for (elev = 1; elev <= 50; elev++)
    {

        y = y + (pow(x, elev) / den);

        den--;
    }

    cout << "\n f(x) = " << y << endl;

    return 0;
}