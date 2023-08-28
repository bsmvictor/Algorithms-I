#include <iostream>
#include <string> //Bibliotecas
#include <locale.h>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Portuguese");

     //Variaveis
     string nome, cpf, uf;
     bool sair = false; //flag
     float visitantes = 0, MG = 0;
     float percentual1, percentual2;

     cout << " \nInsira seu nome: "; //Primeira entrada e dica da flag
     getline(cin, nome);             //Nome ou flag

     while (!sair) //Inicio da repetição
     {

          cout << " \nInsira seu CPF: "; //CPF
          cin >> cpf;

          while (cpf.size() < 0 || cpf.size() > 11)
          {
               cout << "[CPF INCORRETO]\nRE-ESCREVA O CPF:";

               cin >> cpf;
          }

          cout << " \nInsira seu estado de origem: "; //UF
          cin >> uf;

          while (uf.size() < 0 || uf.size() > 2)
          {
               cout << "[ESTADO INCORRETO]\nRE-ESCREVA O ESTADO:";
               cin >> uf;
          }

          cout << " \nNome: " << nome << " CPF: " << cpf << " UF:" << uf << endl; //Informações do visitante

          cout << " \nInsira seu nome ou digite sair para encerrar o programa: "; //Primeira entrada e dica da flag
          cin.ignore();
          getline(cin, nome); //Nome ou flag

          while (nome.size() < 0 || nome.size() > 50)
          {
               cout << "[NOME INCORRETO]\nRE-ESCREVA O NOME:";

               getline(cin, nome);
          }

          visitantes++; //Contador do total de visitantes

          if (uf == "Mg" || uf == "mg" || uf == "MG") //contador de visitantes de Mg
          {
               MG++;
          }

          percentual1 = (MG * 100) / visitantes; //Percentual de Mg

          percentual2 = 100 - percentual1; //Percentual de fora de Mg

          if (nome == "sair") //Ao acionar a flag
          {
               cout << " \nPercentual de visitantes do estado de MG: " << percentual1 << "%" << endl;
               cout << " \nPercentual de visitantes de outros estados: " << percentual2 << "%" << endl;
               sair = true;
          }
     }

     return 0;
}