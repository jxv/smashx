#include "Battle/SequenceImpl.hh"

#include "Battle/QuerySequence.hh"
#include "Battle/Graphics.hh"
#include "Battle/Audio.hh"
#include "Battle/Physics.hh"
#include "Battle/Input.hh"
#include "Battle/Timer.hh"
#include "Battle/Logic.hh"

namespace battle {

  void SequenceImpl::runPreBattle() {
    while (!querySequence_.isPreBattle()) {
      timer_.startFrame();
      audio_.step();
      graphics_.step();
      timer_.endFrame();
    }
  }

  void SequenceImpl::runInBattle() {
    while (!querySequence_.isInBattle()) {
      timer_.startFrame();
      input_.step();
      physics_.step();
      logic_.step();
      audio_.step();
      graphics_.step();
      timer_.endFrame();
    }
  }

  void SequenceImpl::runPostBattle() {
    while (!querySequence_.isPostBattle()) {
      timer_.startFrame();
      physics_.step();
      audio_.step();
      graphics_.step();
      timer_.endFrame();
    }
  }

}
