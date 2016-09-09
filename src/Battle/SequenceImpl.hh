#ifndef BATTLE_SEQUENCEIMPL_HH
#define BATTLE_SEQUENCEIMPL_HH

#include "Battle/SequenceImpl.hh"

#include "Battle/QuerySequence.hh"
#include "Battle/Graphics.hh"
#include "Battle/Audio.hh"
#include "Battle/Physics.hh"
#include "Battle/Input.hh"
#include "Battle/Timer.hh"
#include "Battle/Logic.hh"

namespace battle {

  class SequenceImpl : public Sequence {
  private:
    QuerySequence &querySequence_;
    Graphics &graphics_;
    Audio &audio_;
    Physics &physics_;
    Input &input_;
    Timer &timer_;
    Logic &logic_;

  public:
    SequenceImpl(QuerySequence &querySequence, Graphics &graphics, Audio &audio, Physics &physics, Input &input, Timer &timer, Logic &logic)
    : querySequence_(querySequence)
    , graphics_(graphics)
    , audio_(audio)
    , physics_(physics)
    , input_(input)
    , timer_(timer)
    , logic_(logic)
    {}

    void runPreBattle();
    void runInBattle();
    void runPostBattle();
 };

}

#endif
