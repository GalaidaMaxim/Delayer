#ifndef DELAYER
#define DELAYER

class Delayer
{
public:
  void setDelayTime(unsigned long int time);
  void setCallback(void (*callback)());
  void process();
  void call();
  void reset();

protected:
  unsigned long int timer = 0;
  unsigned long int delTime = 0;
  void (*callback)() = 0;
};

#endif