

#include <Arduino.h>

//#define EXCLUDE_EXOTIC_PROTOCOLS  // Saves around 240 bytes program memory if IrSender.write is used
//#define SEND_PWM_BY_TIMER         // Disable carrier PWM generation in software and use (restricted) hardware PWM.
//#define USE_NO_SEND_PWM           // Use no carrier PWM, just simulate an active low receiver signal. Overrides SEND_PWM_BY_TIMER definition
//#define NO_LED_FEEDBACK_CODE      // Saves 566 bytes program memory
//#define USE_OPEN_DRAIN_OUTPUT_FOR_SEND_PIN // Use or simulate open drain output mode at send pin. Attention, active state of open drain is LOW, so connect the send LED between positive supply and send pin!

#include "PinDefinitionsAndMore.h"  // Define macros for input and output pin etc.
#include <IRremote.hpp>

#define DELAY_AFTER_SEND 2000
#define DELAY_AFTER_LOOP 5000

const int power = 2; 
int powerState = 0;
const int input = 1;
int inputState = 0;
const int exitB = 5; 
int exitBState = 0;
const int homeB = 4;
int homeState = 0;
const int left = 6;
int leftState = 0;
const int up = 7;
int upState = 0;
const int right = 9;
int rightState = 0;
const int down = 8;
int downState = 0;
const int returnB = 12;
int returnState = 0;
const int volUp = 11;
int volUpState = 0;
const int enter = 10;
int enterState = 0;
const int volDown= 13;
int volDownState = 0;






void setup() {

      pinMode(4, INPUT);


#if defined(__AVR_ATmega32U4__) || defined(SERIAL_PORT_USBVIRTUAL) || defined(SERIAL_USB) /*stm32duino*/|| defined(USBCON) /*STM32_stm32*/|| defined(SERIALUSB_PID) || defined(ARDUINO_attiny3217)
    delay(4000); // To be able to connect Serial monitor after reset or power up and before first print out. Do not wait for an attached Serial Monitor!
#endif
    // Just to know which program is running on my Arduino


#if defined(IR_SEND_PIN)
    IrSender.begin(); // Start with IR_SEND_PIN as send pin and enable feedback LED at default feedback LED pin
#else
    IrSender.begin(3, ENABLE_LED_FEEDBACK); // Specify send pin and enable feedback LED at default feedback LED pin
#endif



#if !defined(SEND_PWM_BY_TIMER)
    /*
     * Print internal signal generation info
     */
    IrSender.enableIROut(38); // Call it with 38 kHz to initialize the values printed below
    
#endif
}

/*
 * Set up the data to be sent.
 * For most protocols, the data is build up with a constant 8 (or 16 byte) address
 * and a variable 8 bit command.
 * There are exceptions like Sony and Denon, which have 5 bit address.
 */
uint16_t sAddress = 0x0102;
uint8_t sCommand = 0x34;
uint8_t sRepeats = 0;



void loop() {
    powerState = digitalRead(power);

    if (powerState == HIGH) {
    // turn LED on:
    IrSender.sendSamsung(0x707, 0xE6, 0); 
    powerState = LOW;

  }
  inputState = digitalRead(input);

    if (inputState == HIGH) {
    // turn LED on:
    IrSender.sendSamsung(0x707, 0x1, 0);

    inputState = LOW;

  }
  exitBState = digitalRead(exitB);

    if (exitBState == HIGH) {
    // turn LED on:
    IrSender.sendSamsung(0x707, 0x2D, 0);

    exitBState = LOW;

  }
  homeState = digitalRead(homeB);
  if (homeState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0x79, 0);
    homeState = LOW;
  } 

  leftState = digitalRead(left);
  if (leftState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0x65, 0); 
    leftState = LOW;
  } 

  upState = digitalRead(up);
  if (upState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0x60, 0);
    upState = LOW;
  } 
  rightState = digitalRead(right);
  if (rightState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0x62, 0);
    rightState = LOW;
  } 

  downState = digitalRead(down);
  if (downState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0x61, 0); 
    homeState = LOW;
  }
   returnState = digitalRead(returnB);
  if (returnState == HIGH)
  {
     IrSender.sendSamsung(0x707, 0x58, 0); 
    returnState = LOW;
  }
  volUpState = digitalRead(volUp);
  if (volUpState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0x7, 0);
    volUpState = LOW;
  }
  enterState = digitalRead(enter);
  if (enterState == HIGH)
  {
     IrSender.sendSamsung(0x707, 0x68, 0);
    enterState = LOW;
  }  
  volDownState = digitalRead(volDown);
  if (volDownState == HIGH)
  {
    IrSender.sendSamsung(0x707, 0xB, 0); 
    volDownState = LOW;
  }  
  

    }

    

    
