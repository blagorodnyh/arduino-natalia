
#include "max6675.h" //INCLUSÃO DE BIBLIOTECA
/* localtime example */
#include <stdio.h>
#include <time.h>


int ktcSO_in = 4; //PINO DIGITAL (SO)
int ktcCS_in = 5; //PINO DIGITAL (CS)
int ktcCLK_in = 6; //PINO DIGITAL (CLK / SCK)

int ktcSO_out = 8; //PINO DIGITAL (SO)
int ktcCS_out = 9; //PINO DIGITAL (CS)
int ktcCLK_out = 10; //PINO DIGITAL (CLK / SCK)

 
MAX6675 ktc0(ktcCLK_in, ktcCS_in, ktcSO_in); //CRIA UMA INSTÂNCIA UTILIZANDO OS PINOS (CLK, CS, SO) na entrada do sistema

MAX6675 ktc1(ktcCLK_out, ktcCS_out, ktcSO_out); //CRIA UMA INSTÂNCIA UTILIZANDO OS PINOS (CLK, CS, SO) na saída do sistema
  
void setup(){
  Serial.begin(9600); //INICIALIZA A SERIAL
  delay(1000); //INTERVALO DE 500 MILISSEGUNDOS
}
 
void loop(){
   Serial.print("Temperatura na entrada: ");
   Serial.print(ktc0.readCelsius());
   Serial.print("ºC\n");
   Serial.print("Temperatura na saída: "); //IMPRIME O TEXTO NO MONITOR SERIAL
   Serial.print(ktc1.readCelsius()); //IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
   Serial.println("ºC"); //IMPRIME O TEXTO NO MONITOR SERIAL
   delay(1000); //INTERVALO DE 500 MILISSEGUNDOS
}
