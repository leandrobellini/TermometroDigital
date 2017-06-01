//Autor: Leandro Bellini


/*
Display de 7 segmentos 2 digitos
|-----------------------|
|10	   9	  8	  7 	6	  |
|Vcc   G	  F 	A  	B   |
|Dig2				            |
|-----------------------|
|1	 2	  3	  4 	 5	  |
|D   Dp 	E  	C	   Vcc  |
|				           Dig1 |
|-----------------------|
*/

//Digito 1 -> pino 12  (Digito a direita)
//Digito 2 -> pino 13  (Digito a esquerda)
#include "Arduino.h"
#include <stdio.h>

#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 7  //pino do sensor

#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  pinMode(9, OUTPUT); //digito A
  pinMode(10, OUTPUT); //digito B
  pinMode(2, OUTPUT); //digito C
  pinMode(3, OUTPUT); //digito D
  pinMode(4, OUTPUT); //digito E
  pinMode(5, OUTPUT); //digito F
  pinMode(6, OUTPUT); //digito G

  pinMode(12, OUTPUT); //Dig 1
  pinMode(13, OUTPUT); //Dig 2

}

void escreveDigito(int digito, int numero){
  if(digito == 1){
    //ascende digito a direita(Dig 1)
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }else{
    //ascende digito a esqueda(Dig 2)
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }

  switch (numero) {
    case 0:
      digitalWrite(9, LOW); //A
      digitalWrite(10, LOW); //B
      digitalWrite(2, LOW); //C
      digitalWrite(3, LOW); //D
      digitalWrite(4, LOW); //E
      digitalWrite(5, LOW); //F
      digitalWrite(6, HIGH); //G
      break;

    case 1:
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

    case 2:
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      break;

    case 3:
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      break;

    case 4:
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;

    case 5:
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;

    case 6:
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;

    case 7:
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      break;

    case 8:
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;

    case 9:
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      break;
  }
}



void loop()
{
    // Read temperature as Celsius (the default)
    float t = dht.readTemperature();

    int temp = t;

    int Digito1 = temp%10;
    int Digito2 = temp/10;

    if (isnan(t)) {
      Serial.println("Failed to read from DHT sensor!");
      Digito1 = 0;
      Digito2 = 0;
      return;
    }


    //escreve digitos e dá tempo ao sensor
    //aprox 30s
    for(int i = 0; i < 10000; i++){
      escreveDigito(1, Digito1);
      delay(1);

      escreveDigito(2, Digito2);
      delay(1);
    }

}
