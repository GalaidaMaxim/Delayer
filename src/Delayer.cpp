#include <Delayer.h>
#include <Arduino.h>

void Delayer::setDelayTime(unsigned long int time)
{
    this->delTime = time;
}
void Delayer::setCallback(void (*callback)())
{
    this->callback = callback;
}
void Delayer::process()
{
    if (millis() - timer >= delTime)
    {
        (*callback)();
        reset();
    }
}

void Delayer::call()
{
    (*callback)();
}
void Delayer::reset()
{
    timer = millis();
}
