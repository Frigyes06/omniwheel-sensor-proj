struct irany{
  float way=1, dist=1;
};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

irany getWay {
  int sensor1 = digitalRead(2);
  int sensor2 = digitalRead(3);
  int sensor3 = digitalRead(4);
  int sensor4 = digitalRead(5);
  int sensor5 = digitalRead(6);
  int sensor6 = digitalRead(7);
  int sensor7 = digitalRead(8);
  int sensor8 = digitalRead(9);
  if(sensor1 && sensor5){
      irany.way=90;
      irany.dist=0;
      return(irany);
    } else
  if(sensor8 && sensor6){
      irany.way=90;
      irany.dist=-1;
      return(irany);
    } else 
  if(sensor2 && sensor4){
      irany.way=90;
      irany.dist=1;
      return(irany);
    } else
  if(sensor3){
      irany.way=90;
      irany.dist=2;
      return(irany);
    } else
  if(sensor7){
      irany.way=90;
      irany.dist=-2;
      return(irany);
    } else
}
