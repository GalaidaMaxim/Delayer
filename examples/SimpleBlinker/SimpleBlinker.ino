#include <Delayer.h>

bool state = false;

void change()
{
    state = !state;
    digitalWrite(13, state);
}

Delayer d1;

void setup()
{
    // put your setup code here, to run once:
    pinMode(13, OUTPUT);
    d1.setDelayTime(100);
    d1.setCallback(change);
}

void loop()
{
    // put your main code here, to run repeatedly:
    d1.process();
}
