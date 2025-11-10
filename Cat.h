#ifndef CAT_H
#define CAT_H
#include "Animal.h"

class Cat :public Animal{
public:
  Cat();
  Cat(std::string specie, int lives);
  void setLives(int lives);
  int getLives();
  std::string move();
  std::string speak();
  ~Cat();

private:
  int lives;
};
#endif
