#ifndef BATTLE_SEQUENCE_HH
#define BATTLE_SEQUENCE_HH

namespace battle {

  class Sequence {
  public:
    virtual void runPreBattle() = 0;
    virtual void runInBattle() = 0;
    virtual void runPostBattle() = 0;
  };

}

#endif
