int PAUSE = 1000;      // пауза
int PAUSE_MIN = 2000;  //пауза между словами
int DOT = 500;         // точка
int DASH = 1500;       // тире
int ledPin = 10;       // светодиод
int bttPin2 = 2;       // кнопка то4ки
int bttPin3 = 3;       // кнопка тире
int bttPin4 = 4;       // кнопка слова

void fDOT() {  //функция то4ки
  digitalWrite(ledPin, HIGH);
  delay(DOT);
  digitalWrite(ledPin, LOW);
  delay(PAUSE);
}

void fDASH() {  //функция тире
  digitalWrite(ledPin, HIGH);
  delay(DASH);
  digitalWrite(ledPin, LOW);
  delay(PAUSE);
}
void fPAUSE() {  // функция паузы
  delay(PAUSE_MIN);
}
void setup() {
  pinMode(ledPin, OUTPUT);  // определяем пин светодиода
  pinMode(bttPin2, INPUT_PULLUP);
  pinMode(bttPin3, INPUT_PULLUP);
  pinMode(bttPin4, INPUT_PULLUP);
}

void loop() { 
  if (digitalRead(bttPin4) == LOW) // тут пишем наше слово
  {
    fDOT();
    fDOT();
    fDOT();
    }
  if (digitalRead(bttPin2) == LOW) // кнопка ТОЧКИ
  {
    digitalWrite(ledPin, HIGH);
    delay(DOT);
    digitalWrite(ledPin, LOW);
  }
  if (digitalRead(bttPin3) == LOW)  // кнопка ТИРЕ
  {
    digitalWrite(ledPin, HIGH);
    delay(DASH);
    digitalWrite(ledPin, LOW);
  }
}
