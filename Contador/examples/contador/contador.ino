#include <Contador.h>
Contador cont(1,10);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

cont.For();
}

void loop() {
  // put your main code here, to run repeatedly:

}
