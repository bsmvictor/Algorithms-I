#include <iostream>

using namespace std;

//Função converter as horas
void converte(int tempo, int &hr, int &min, int &seg)
{
    int resto;

    hr = tempo / 3600;

    resto = tempo % 3600;

    min = resto / 60;

    seg = resto % 60;
}

//Função principal
int main()
{
    //Variaveis
    int tempo_s, hora, minutos, segundos;

    //Entrada de dados
    cout << "\n Entre com o valor em segundos: ";
    cin >> tempo_s;

    //Chamando a função
    converte(tempo_s, hora, minutos, segundos);

    //Saida de dados
    cout << "\n\t " << hora << "h " << minutos << "min " << segundos << "seg" << endl;

    return 0;
}