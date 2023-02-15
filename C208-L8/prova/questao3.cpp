#include <iostream>

using namespace std;

//função dos lados do triangulo
int Triangulo(int x, int y, int z)
{
    int resultado;

    if ((x + y > z) && (y + z > x) && (x + z > y))
    {
        resultado = 1;
    }

    else
    {
        resultado = 0;
    }

    return resultado;
}

//função da area do triangulo
void Area()
{
    //variaveis
    int altura, base;
    cin >> base;

    cin >> altura;

    cout << "Area: " << base * altura / 2 << endl;
}

//função do perimetro do triangulo
int Perimetro(int lad1, int &lad2, int &lad3)
{
    cout << "Perimetro: " << lad1 + lad2 + lad3 << endl;
}

int main()
{
    //variaveis
    int lado1, lado2, lado3;
    int verificar;

    //entrada dos lados do triangulo
    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    //chamando a função do triangulo
    verificar = Triangulo(lado1, lado2, lado3);

    if (verificar == 1)
    {
        cout << "Os tres valores sao lados de um triangulo" << endl;

        //chamando a função da area
        Area();

        //chamando a função do perimetro
        Perimetro(lado1, lado2, lado3);
    }
    else
    {
        cout << "Nao eh possivel formar um triangulo" << endl;
    }

    return 0;
}
