<h3> <center>Simples Termômetro Digital com Arduino e DHT22 </center></h3>

![alt text](https://raw.githubusercontent.com/leandrobellini/TermometroDigital/master/img/img2.jpg)


<h5>Hardware utilizado: </h5>
<ul>
  <li>Arduino UNO</li>
  <li>Sensor de temperatura DHT22</li>
  <li>Display de 7 segmentos 2 dígitos</li>
  <li>Resistores de 220 ohm</li>
  <li>Resistores de 10K ohm</li>
</ul>  

<h5>Software: </h5>
Utilizando a plataforma PlataformIO(platformio.org) e linguagem C. Biblioteca DHT22 já incluida na pasta lib. <br>
Para dar o efeito necessário foi multiplexado os dois digitos, dando a sensação que estão ligados ao mesmo tempo.
Atualização dos dados do sensor a cada 30s aproximadamente.


<h5>Arduino e DHT22</h5>

![alt text](https://github.com/leandrobellini/TermometroDigital/blob/master/img/esquema.jpg)

<br>
Foi usado um resistor de <b>10K</b> ohm entre o pino de dados(2) e o VCC.
<br>
O pino de data do DHT22 foi conectado no pino digital 7 do Arduino.

<h5>Display</h5>

Referência: https://en.wikipedia.org/wiki/Seven-segment_display <br> 
Para este caso GND liga led e VCC para selecionar o digito (pin 5 e 10 do display)<br>
Foi usado um resistor de <b>220 ohm</b> entre o VCC e o pino que seleciona o digito(pin 5 ou 10)

![alt text](https://github.com/leandrobellini/TermometroDigital/blob/master/img/digts.png)


<h5>Ligação nos pinos do Arquino: </h5>
A -> 9 <br>
B -> 10 <br>
C -> 2 <br>
D -> 3 <br>
E -> 4 <br>
F -> 5 <br>
G -> 6 <br>
Digito 1 -> 12 <br>
Digito 1 -> 13 <br>