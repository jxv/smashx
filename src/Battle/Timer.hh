#ifndef BATTLE_TIMER_HH
#define BATTLE_TIMER_HH

namespace battle {

  class Timer {
  public:
    virtual void startFrame() = 0;
    virtual void endFrame() = 0;
  };

}

#endif
