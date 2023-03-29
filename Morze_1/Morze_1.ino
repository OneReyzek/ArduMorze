int PAUSE = 1000; // пауза
int PAUSE_MIN = 2000; //пауза между словами
int DOT = 500; // точка
int DASH = 1500; // тире
int ledPin = 13; // светодиод

void fDOT(){ //функция то4ки
  digitalWrite(ledPin, HIGH);
  delay(DOT);
  digitalWrite(ledPin, LOW);
  delay(PAUSE);
}

void fDASH(){ //функция тире
  digitalWrite(ledPin, HIGH);
  delay(DASH);
  digitalWrite(ledPin, LOW);
  delay(PAUSE);
}
void fPAUSE(){
  delay(PAUSE_MIN);
}
void setup() {
pinMode(ledPin, OUTPUT);
}

void loop() {
fDOT(); fDASH(); fDASH(); fDOT(); //П
fPAUSE();
fDOT();fDASH();fDOT(); //Р
fPAUSE();
fDOT(); fDOT(); //И
fPAUSE();
fDOT();fDASH();fDASH(); //В
fPAUSE();
fDOT();//Е
fPAUSE();
fDOT();//Т
delay(10000);
}
