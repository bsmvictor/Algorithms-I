#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    int x, n; // n = número de termos
    int num = 0, den = 0;
    int a, b; //contadores
    float soma = 0;

    //Entrada de dados
    cout << "\n Valor de x: ";
    cin >> x;

    cout << "\n Quantos termos? ";
    cin >> n;

    //Processamento
    for (int a = 1; a <= n; a++) //numerador
    {
        den += 2;
        int fatorial = 1;
        //fatorial
        for (int b = den; b > 0; b--)
        {
            fatorial *= b;
        }

        soma += (x * 1.0) / fatorial;
    }

    //saida de dados
    cout << fixed << setprecision(6) << "\n f(x) = " << soma << endl;

    return 0;
}