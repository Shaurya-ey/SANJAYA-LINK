#include <RadioLib.h>


#define LORA_NSS  17   
#define LORA_BUSY 13   
#define LORA_RST  12   
#define LORA_DIO1 14   


SX1262 radio = new Module(LORA_NSS, LORA_DIO1, LORA_RST, LORA_BUSY);

void setup() {
  Serial.begin(115200);
  delay(2000); 

  Serial.println(F("[SX1262] Initializing ... "));

  
  int state = radio.begin(868.0); 

  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("Success! SPI Communication is working."));
  } else {
    Serial.print(F("Failed, code "));
    Serial.println(state);
    while (true); 
  }
}

void loop() {
  Serial.print(F("[SX1262] Sending test packet ... "));


  int state = radio.transmit("Hello World!");

  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("Packet sent successfully!"));
  } else if (state == RADIOLIB_ERR_TX_TIMEOUT) {
    Serial.println(F("Timed out - check your antenna connection."));
  } else {
    Serial.print(F("Failed, code "));
    Serial.println(state);
  }

  
  delay(5000);
}