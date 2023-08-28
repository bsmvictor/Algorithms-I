#include <iostream>

using namespace std;

//Função fatorial
int fat(int num)
{
    int result = 1;

    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }

    return result;
}

//Função principal
int main()
{

    //Variaveis
    int n, fatorial;

    //Entrada do numero
    cout << "\n Entre com o numero: ";
    cin >> n;

    //Critica de entrada de dados
    while (n <= 0)
    {
        cout << "\n Entre com um numero valido: ";
        cin >> n;
    }
    //retorno da função
    fatorial = fat(n);

    //Resultado do calculo
    cout << "fatorial de " << n << ": " << fatorial;

    return 0;
}
