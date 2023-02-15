#include <iostream>

using namespace std;

int main()
{
	//Variáveis
    int vag[21];
    int i, n;

    //entrada de dados
    cin>>n;

    //loop para entrada de pessoas em cada vagão
    for(i=0; i<n; i++)
    {
        cin >> vag[i];
    }

    //verificar se o vagão esta com vaga ou nao
    for(i=0; i<n; i++)
    {
        if(vag[i] < 20)
            cout<<"vagao "<<i<<":"<<" Tem vaga"<<endl;

        else
        {
            cout<<"vagao "<<i<<":"<<" lotado"<<endl;
        }
    }
	return 0;
}