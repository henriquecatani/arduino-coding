// C++ code
// Esse algoritmo altera as cores de um LED RGB 255 vezes
// para cada cor. Dessa forma, ele roda por todas as cores
// possíveis com RGB.

// O circuito em que esse código é usado funciona da seguinte
// forma: um LED RGB ligado a uma placa de ensaio, com o pino
// catódico ligado à terra, passando por um resistor de 113 ohms.
// Os pinos R, G e B estão ligados nos pinos PWM 11, 10 e 9.
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}
// Pinos das cores
int r = 11;
int g = 10;
int b = 9;
void loop()
{
  int n = 0;
  // Loops: à medida que uma cor aumenta, outra diminui. A terceira fica zerada.
  while (n <256) {
    analogWrite(r, 255 - n);
    analogWrite(g, n);
    analogWrite(b, 0);
    delay(10);
   	n++;
  }
  n = 0;
  while (n <256) {
    analogWrite(g, 255 - n);
    analogWrite(b, n);
    analogWrite(r, 0);
    delay(10);
   	n++;
  }
  n = 0;
  while (n <256) {
    analogWrite(b, 255 - n);
    analogWrite(r, n);
    analogWrite(g, 0);
	delay(10);
   	n++;
  }
  }