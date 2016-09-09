#include "Battle/Main.hh"

#include "Battle/Sequence.hh"

namespace battle {
   
  void main(Sequence &sequence) {
    sequence.runPreBattle();
    sequence.runInBattle();
    sequence.runPostBattle();
  }

}
