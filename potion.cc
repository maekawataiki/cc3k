#include "potion.h"


Potion::Potion(): isUsable{true}, isUsed{false} {}

friend std::ostream &operator<<(std::stream &out, Potion &i){
  if (i.exist()) {
    out << 'P';
  }
  return out;
}