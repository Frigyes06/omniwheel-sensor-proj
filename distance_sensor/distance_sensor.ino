#define trigPin 3
#define echoForward 4
#define echoLeft 5
#define echoBackward 6
#define echoRight 7

struct mozgo_atlag{
  int tmp1=1, tmp2=1, tmp3=1, tmp4=1, tmp5=1;
  double atlag;
};

int tmp1=1;
int tmp2=1;
int tmp3=1;
int tmp4=1;
int tmp5=1;

mozgo_atlag elore, hatra, jobbra, balra;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoForward, INPUT);
  pinMode(echoLeft, INPUT);
  pinMode(echoBackward, INPUT);
  pinMode(echoRight, INPUT);
  Serial.begin(9600);
}

void loop() {
  //1 szenzor
   elore.tmp5=elore.tmp4;
   elore.tmp4=elore.tmp3;
   elore.tmp3=elore.tmp2;
   elore.tmp2=elore.tmp1;
   elore.tmp1=getDistance(4);
   elore.atlag = (elore.tmp1 + elore.tmp2 + elore.tmp3 + elore.tmp4 + elore.tmp5)/5;
  //2 szenzor
   hatra.tmp5=hatra.tmp4;
   hatra.tmp4=hatra.tmp3;
   hatra.tmp3=hatra.tmp2;
   hatra.tmp2=hatra.tmp1;
   hatra.tmp1=getDistance(6);
   hatra.atlag = (hatra.tmp1 + hatra.tmp2 + hatra.tmp3 + hatra.tmp4 + hatra.tmp5)/5;
  //3 szenzor
   jobbra.tmp5=jobbra.tmp4;
   jobbra.tmp4=jobbra.tmp3;
   jobbra.tmp3=jobbra.tmp2;
   jobbra.tmp2=jobbra.tmp1;
   jobbra.tmp1=getDistance(7);
   jobbra.atlag = (jobbra.tmp1 + jobbra.tmp2 + jobbra.tmp3 + jobbra.tmp4 + jobbra.tmp5)/5;
  //4 szenzor
   balra.tmp5=balra.tmp4;
   balra.tmp4=balra.tmp3;
   balra.tmp3=balra.tmp2;
   balra.tmp2=balra.tmp1;
   balra.tmp1=getDistance(5);
   balra.atlag = (balra.tmp1 + balra.tmp2 + balra.tmp3 + balra.tmp4 + balra.tmp5)/5;
   Serial.print(elore.atlag);
   Serial.print(hatra.atlag);
   Serial.print(jobbra.atlag);
   Serial.print(balra.atlag);
   Serial.println("");
}

int getDistance(int pin){
    long duration;
    int distance;
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(pin, HIGH);
    distance = duration * 0.034 / 2;
    return distance;
  }
