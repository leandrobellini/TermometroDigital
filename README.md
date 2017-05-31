<h3> <center>Simples Termômetro Digital com Arduino e DHT22 </center></h3>

![alt text](https://raw.githubusercontent.com/leandrobellini/TermometroDigital/master/img/img2.jpg)


<h5>Hardware utilizado: </h5>
<ul>
  <li>Arduino UNO</li>
  <li>Sensor de temperatura DHT22</li>
  <li>Display de 7 segmentos 2 dígitos</li>
  <li>Resistores de 220 ohm</li>
</ul>  

<h5>Software: </h5>
Utilizando a plataforma PlataformIO(platformio.org) e linguagem C. Biblioteca DHT22 já incluida na pasta lib.
Para dar o efeito necessário foi multiplexado os dois digitos, dando a sensação que estão ligados ao mesmo tempo.
Atualização dos dados do sensor a cada 30s aproximadamente.


<h5>Arduino e DHT22</h5>

![alt text](https://github.com/leandrobellini/TermometroDigital/blob/master/img/esquema.jpg)

<h5>Display</h5>

Referência: https://en.wikipedia.org/wiki/Seven-segment_display

![alt text](https://github.com/leandrobellini/TermometroDigital/blob/master/img/digts.png)

<h5>Ligação nos pinos do Arquino: </h5>
A -> 9
B -> 10
C -> 2
D -> 3
E -> 4
F -> 5
G -> 6
Digito 1 -> 12
Digito 1 -> 13