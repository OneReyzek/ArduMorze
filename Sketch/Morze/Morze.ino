int PAUSE = 1000; // пауза
int PAUSE_MIN = 2000; //пауза между словами
int DOT = 500; // точка
int DASH = 1500; // тире
int ledPin = 13; // светодиод
int bttPin = 3;

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
void fPAUSE(){ // функция паузы
  delay(PAUSE_MIN);
}
void setup() {
pinMode(ledPin, OUTPUT); // определяем пин светодиода
pinMode(bttPin, INPUT_PULLUP);
}

void loop() {
if (digitalRead(bttPin) == HIGH) {
fDOT(); fDASH(); fDASH(); fDOT(); fPAUSE();// П
fDOT(); fDASH(); fDOT(); fPAUSE();// Р
fDOT(); fDASH(); fDASH();  fPAUSE(); // В
fDOT(); fPAUSE();// Е/Ё
fDASH(); fPAUSE();// Т
fDASH(); fDASH(); fPAUSE();// М
fDOT(); fDOT(); fPAUSE();// И
fDOT(); fDASH(); fDOT(); fPAUSE();// Р
delay(10000); // пауза для перезапуска
}}
