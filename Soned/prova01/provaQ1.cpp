#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    float mph, kmh = 0;

    //Entrada de dados
    cout << "\n Digite a velocidade em mph: ";
    cin >> mph;
    while (mph > 190 || mph < 0)
    {
        cout << "\n Velocidade invalida, insira novamente: ";
        cin >> mph;
    }

    //Processamento e saida de dados

    kmh = (mph * 1.60934); //conversor de mph para kmh

    cout << fixed << setprecision(1) << "\n Velocidade em km/h: " << kmh << endl;

    return 0;
}