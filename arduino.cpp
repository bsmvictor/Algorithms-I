//biblioteca lcd
#include <LiquidCrystal.h>

//definindo os pinos do lcd
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//variavies de temperatura
int entradaTemp = 0;
int saidaTemp = 0;

//variaveis do sensor de gás
int sensorGas = A0;
int valorSensorGas = 0;

//Variaveis dos leds e sua intensificação de brilho
const int pinoLed1 = 11;
const int pinoLed2 = 10;
const int pinoLed3 = 9;
float sinVal;
int ledVal;

//armazenando valores numéricos de 8-bit sem sinal, de 0 a 255.
byte som = 12;
byte led1 = 11;
byte led2 = 10;
byte led3 = 9;

void setup()
{
    //iniciar o serial
    Serial.begin(9600);

    //definir que o lcd possui 16 caracteres e 2 linhas
    lcd.begin(16, 2);

    //definindo sensor de gas como entrada
    pinMode(sensorGas, INPUT);

    //definindo leds como saia
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}

void loop()
{
    //converte graus para radianos e então obter o valor do seno para assim aumentar o brilho do led
    for (int x = 0; x < 180; x++)
    {
        sinVal = (sin(x * (3.1412 / 180)));
        ledVal = int(sinVal * 255);

        //leitura do sensor de gás
        valorSensorGas = analogRead(sensorGas);

        //caso o valor de gás no ambiente ultrapsse 250
        if (valorSensorGas > 250)
        {
            //desativação dos leds 1 e 2 que possam estar ativos pelo sensor de temperatura
            analogWrite(led1, LOW);
            analogWrite(led2, LOW);

            //alerta sonoro do buzzer e led3 (vermelho)
            tone(som, 1500);
            delay(500);

            analogWrite(led3, ledVal);
            delay(500);

            noTone(som);
            delay(500);

            analogWrite(led3, LOW);
            delay(500);

            //delay para atualização dos caracteres do lcd
            delay(500);

            //definir o lugar e a linha no lcd
            lcd.setCursor(0, 0);

            //apagar caracteres e escrever no lcd
            lcd.clear();
            lcd.print("Gas no ambiente");
        }

        else
        {
            //recebimento e conversão da temperatura
            entradaTemp = analogRead(A1);
            saidaTemp = map(entradaTemp, 20, 358, -40, 125);

            //temperatura menor ou igual a 20 graus acende led1 (azul)
            if (saidaTemp <= 20)
                analogWrite(led1, ledVal);

            else
                analogWrite(led1, LOW);

            //temperatura entre 21 e 31 graus acende led2 (verde)
            if (saidaTemp >= 21 && saidaTemp <= 31)
                analogWrite(led2, ledVal);

            else
                analogWrite(led2, LOW);

            //temperatura entre 32 graus acende led3 (vermelho)
            if (saidaTemp >= 32)
                analogWrite(led3, ledVal);

            else
                analogWrite(led3, LOW);

            //delay para atualização dos caracteres do lcd
            delay(500);

            //definir o lugar e a linha no lcd
            lcd.setCursor(0, 0);

            //apagar caracteres e escrever no lcd
            lcd.clear();
            lcd.print("Temp: ");
            lcd.print(saidaTemp);
            lcd.print(" C");
        }
    }
}