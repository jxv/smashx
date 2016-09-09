#include "Battle/Main.hh"

#include "Battle/Logic.hh"

namespace battle {
   
  void main(Logic &logic) {
    while (!logic.isPreBattle()) {
    }
    while (!logic.isInBattle()) {
    }
    while (!logic.isPostBattle()) {
    }
  }

}
