//
// sketch20190819a_Blank.ino
//

// ---------------------------------------------------------

// 初期設定

void setup() {

  Serial.begin(57600);

  pinMode(13, OUTPUT);

  // 以下の3行は「ボタンシールド」のための設定
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  // 以下の 3行も「ボタンシールド」のための設定
  pinMode(A5, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);

}

// ---------------------------------------------------------

// メインループ

void loop() {

  // Arduino 本体のLEDを点灯
  digitalWrite(13, HIGH);

  //「ボタンシールド」の3つのLEDを点灯
  digitalWrite(9,  HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

  // 200ミリ秒待つ
  delay(200);

  // Arduino 本体のLEDを消灯
  digitalWrite(13, LOW);

  //「ボタンシールド」の3つのLEDを消灯
  digitalWrite(9,  LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

  // 200ミリ秒待つ
  delay(200);

}

// ---------------------------------------------------------
