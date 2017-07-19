#ifndef ELF_H
#define ELF_H
#include "enemy.h"

class Elf : public Enemy {
protected:
  void attackImpl(Shade &p) override;
  void attackImpl(Vampire &p) override;
  void attackImpl(Troll &p) override;
  void attackImpl(Goblin &p) override;
public:
  Elf(): Enemy{140, 30, 10} {}
  ~Elf();
  friend std::ostream &operator<<(std::ostream &out, Elf &e);
};

#endif
