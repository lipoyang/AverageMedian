#include <stdint.h>
#include <Average.h>
#include <Median.h>

// 移動平均・移動中央値演算器の生成 (マクロ)
Average_create(uint16_t, 32, average);
Median_create(uint16_t, 32, median);

void setup() {
  Serial.begin(115200);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  
  // 移動平均・移動中央値の初期化
  average.init();
  median.init();
}

void loop() {
  uint16_t x = (float)analogRead(A1);
  
  digitalWrite(2, HIGH);
  // 移動平均の計算
  uint16_t ave = average.calc(x);
  digitalWrite(2, LOW);
  
  digitalWrite(3, HIGH);
  // 移動中央値の計算
  uint16_t med = median.calc(x);
  digitalWrite(3, LOW);
  
  Serial.print(x);
  Serial.print("\t");
  Serial.print(ave);
  Serial.print("\t");
  Serial.print(med);
  Serial.print("\n");
  
  delay(100);
}
