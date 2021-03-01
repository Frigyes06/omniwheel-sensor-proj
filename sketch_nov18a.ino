float deg;
int distance;
int o; // szenzorok szama
bool e = 0;   //ha 0 a feketét jelenti
int a;
int b;

void setup() {
  for (int i = 2 ; i < 10 ; i++) {
    pinMode(i, INPUT);
  }
}

void loop() {
  for (int i = 2 ; i < 10 ; i++) {
    if (digitalRead(i) == e) {
      o = o + 1;  //o++
    }
  }
  if (o == 1 or o == 2) {
    for (int i = 2 ; i < 10 ; i++) {
      if (digitalRead(i) == e) {
        if (a == 0) {
          a = i - 1;
        }
        if (b == 0 and a != 0) {
          b = i - 1;
        }
      }
    }
    if (b == 0) {
      b = a;
    }
  }
  deg = ((a + b) * 22.5 - 45);
  distance = abs(4 - ((a - b) % 8));

}
