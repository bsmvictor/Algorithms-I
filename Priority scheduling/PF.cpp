#include <iostream>  //biblioteca padrão
#include <algorithm> //busca e ordenação
#include <fstream>   //manipular dados

using namespace std;

//struct para o precesso
struct processo
{
    //variavies da função
    char nome[10];
    int tempo_exec;
    int prioridade;

    //função de comparação
    bool operator<(const processo &another) const
    {
        return prioridade < another.prioridade;
    }
};

//função principal
int main()
{
    //Variaveis
    int i;
    struct processo reg[5];
    ifstream file("prioridade.txt");
    double media, soma = 0;

    //leitura das linhas do arquivo e organizalos de acordo com a prioridade
    for (i = 0; i < 5; i++)
    {
        file >> reg[i].nome >> reg[i].tempo_exec >> reg[i].prioridade;
    }
    sort(reg, reg + 5);

    //exibição dos processos e seus tempos de execução
    for (int j = 0; j < i; j++)
    {
        //exibição dos processos
        cout << "p" << reg[j].nome;

        //soma dos tempos de execução para calculo da media
        if (j > 0)
            soma += +reg[j - 1].tempo_exec;

        //calculo inicial da Media
        media += soma;

        //exibição dos tempos de execução
        for (int x = 0; x < reg[j].tempo_exec; x++)
        {
            cout << "-";
        }
    }
    //exibição do tempo médio, soma dos tempos pela quantidade de processos
    cout << "\nTempo medio de espera: " << media / i << " ms" << endl;
    return 0;
}