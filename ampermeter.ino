#include "EmonLib.h"

#define SENSORS 3

EnergyMonitor emons[SENSORS];

void setup() {    
    Serial.begin(9600);

    for(int i = 0; i < SENSORS; i++)
    	emons[i].current(i, 60);
}

void loop() {
    double value;

    for(int i = 0; i < SENSORS; i++) {
        value = emons[i].calcIrms(1480);

        // phrase id
	Serial.print("P");
	Serial.print(i);
	Serial.print(": ");
	
	// watt
        Serial.print(value * 230.0);
        Serial.print(" ");

	// ampere
        Serial.println(value);
    }
}
