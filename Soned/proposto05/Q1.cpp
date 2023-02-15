#include <iostream>

using namespace std;

//Função de conversão mph para kmh
float converte(float mph)
{
    float result;

    result = mph * 1.60934;

    return result;
}

//Função principal
int main()
{

    //Variaveis
    float milhas, quilometros;

    //Entrada da velocidade em milhas
    cout << "\n Entre com a velocidade em milhas por hora: ";

    cin >> milhas;

    //retorno da função
    quilometros = converte(milhas);

    //Resultado da conversão
    cout << milhas << "mph equivalem a " << quilometros << "kmh." << endl;

    return 0;
}
