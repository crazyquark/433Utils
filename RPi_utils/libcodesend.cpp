/*
Converted codesend.cpp into a small library for usage from python
*/
#include "../rc-switch/RCSwitch.h"
#include <stdlib.h>
#include <stdio.h>

/*
pin         - wiringPi pin number to which the transmitter is attached
protocol    - RC switch identified protocol from RFSniffer
decimalcode - As decoded by RFSniffer
protocol    - According to rc-switch definitions
pulselength - pulselength in microseconds
*/
int send(int pin = 0, int protocol = 1, int code, int pulseLength)
{

    // This is a wiringPi pin number
    int PIN = pin;

    if (wiringPiSetup() == -1)
    {
        return 1;
    }

    printf("sending code[%i]\n", code);
    RCSwitch mySwitch = RCSwitch();
    
    if (protocol != 0)
        mySwitch.setProtocol(protocol);
    if (pulseLength != 0)
        mySwitch.setPulseLength(pulseLength);

    mySwitch.enableTransmit(PIN);

    mySwitch.send(code, 24);

    return 0;
}
