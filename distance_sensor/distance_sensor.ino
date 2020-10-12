#define trigPin 3
#define echoForward 4
#define echoLeft 5
#define echoBackward 6
#define echoRight 7


int tmp1;
int tmp2;
int tmp3;
int tmp4;
int tmp5;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoForward, INPUT);
  pinMode(echoLeft, INPUT);
  pinMode(echoBackward, INPUT);
  pinMode(echoRight, INPUT);
}

void loop() {
  int atlag;
  delay(20);
  tmp5=tmp4;
  tmp4=tmp3;
  tmp3=tmp2;
  tmp2=tmp1;
  tmp1=getDistance(4);
  delay(20);
  tmp2 = getDistance(4);
  delay(20);
  tmp3 = getDistance(4);
  delay(20);
  tmp4 = getDistance(4);
  delay(20);
  tmp5 = getDistance(4);
    tmp1 = getDistance(4);

  atlag = (tmp1 + tmp2 + tmp3 + tmp4 + tmp5)/5;
  delay(20);
}

int getDistance(int pin){
    long duration;
    int distance;
    digitalWrite(trigPin, HIGH);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(pin, HIGH);
    distance = duration * 0.034 / 2;
    return distance;
  }
