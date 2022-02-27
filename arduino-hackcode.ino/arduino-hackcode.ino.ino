// INCLUSÃO DE BIBLIOTECAS
#include <Keyboard.h>


void setup() {
  Serial.begin(9600);
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Serial.println("ctrl");
  delay(300);
  Keyboard.press(KEY_LEFT_ALT);
  Serial.println("alt");
  delay(300);
  Keyboard.print("t");
  Serial.println("t");
  delay(400);
  //  Keyboard.print(F("terminal"));
  Keyboard.releaseAll();
  delay(3250);
  Keyboard.print("ls -a");  // any command that will run on terminal
  delay(150);
  Keyboard.write(KEY_RETURN);
}

void loop() {

}
