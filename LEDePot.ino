void setup()
{ 
    pinMode(A1, INPUT);
    Serial.begin(9600);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}
// Pinos das cores
int r = 11;
int g = 10;
int b = 9;
int n;
void loop()
{
  n = analogRead(A1);
  Serial.println(n);
  Serial.println("nao entrou");
  // Loops: à medida que uma cor aumenta, outra diminui. A terceira fica zerada.
  while (n <256) {
    n = analogRead(A1);
    analogWrite(r, 255 - n);
    analogWrite(g, n);
    analogWrite(b, 0);
    Serial.println(n);
    Serial.println("r");

  }
  while ((256 < n) && (n < 256 * 2)) {
    n = analogRead(A1);
    analogWrite(g, 255 * 2 - n);
    analogWrite(b, n);
    analogWrite(r, 0);
    Serial.println(n);
    Serial.println("b");

  }
  while ((256*2 < n) && (n <256 * 3)) {
    n = analogRead(A1);
    analogWrite(b, 255 * 3 - n);
    analogWrite(r, n);
    analogWrite(g, 0);
	Serial.println(n);
    Serial.println("g");

  }
  }
