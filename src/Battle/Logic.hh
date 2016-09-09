#ifndef BATTLE_LOGIC_HH
#define BATTLE_LOGIC_HH

namespace battle {

  class Logic {
  public:
    virtual bool isPreBattle() = 0;
    virtual bool isInBattle() = 0;
    virtual bool isPostBattle() = 0;
  };
  
}

#endif
