//
// sketch20190819a_Blank.ino
//

// ---------------------------------------------------------

void setup() {

  Serial.begin(57600);

  pinMode(13, OUTPUT);

  // 以下の3行は「ボタン・シールド」のための設定
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  // 以下の 3行も「ボタン・シールド」のための設定
  pinMode(A5, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);

}

// ---------------------------------------------------------

void loop() {

  digitalWrite(13, HIGH);

  digitalWrite(9,  HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  delay(200);

  digitalWrite(13, LOW);

  digitalWrite(9,  LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  delay(200);

}

// ---------------------------------------------------------
