#ifndef SNAKE_H
#define SNAKE_H

#include "Animal.h"

class Snake :public Animal{
public:
  Snake();
  Snake(std::string specie, std::string antidote);
  void setAntidote(std::string antidote);
  std::string getAntidote();
  std::string move() override;
  ~Snake();

private:
  std::string antidote;
};
#endif
