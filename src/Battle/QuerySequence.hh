#ifndef BATTLE_QUERYSEQUENCE_HH
#define BATTLE_QUERYSEQUENCE_HH

namespace battle {

  class QuerySequence {
  public:
    virtual bool isPreBattle() = 0;
    virtual bool isInBattle() = 0;
    virtual bool isPostBattle() = 0;
  };

}

#endif
