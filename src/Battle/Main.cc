#include "Battle/Main.hh"

namespace battle {
   
  void main(Sequence &sequence) {
    sequence.runPreBattle();
    sequence.runInBattle();
    sequence.runPostBattle();
  }

}
