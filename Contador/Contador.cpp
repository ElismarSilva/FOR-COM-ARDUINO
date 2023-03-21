#include<Contador.h>
#include<Arduino.h>


Contador::Contador(int n1,int n2){
  num1 = n1;
  num2 = n2;

}

int Contador::For(){
  
Serial.println("Ordem crescente :");
for(int i = num1; i <= num2; i++){
    
    Serial.println(i);
}
Serial.println("Ordem decrescente :");
for(int i = num2; i >= num1; i--){

    Serial.println(i);
}

}
