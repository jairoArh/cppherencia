#ifndef CAN_H
#define CAN_H
#include "Animal.h"

  class Can :public Animal{
    public:
      Can();
      Can(std::string specie, bool trained);
      void setTrained(bool trained);
      bool isTrained();
      std::string speak();
      std::string move() override;
      ~Can();

    private:
      bool trained;
  };

  Can::Can():Animal(){}

  Can::Can(std::string specie,bool trained):Animal(specie){
    Can::trained = trained;
  }

  void Can::setTrained(bool trained){
    this->trained = trained;
  }

  bool Can::isTrained(){
    return trained;
  }

  std::string Can::speak(){
    return "Lo(a)S " + Animal::specie + " Dice Guau Guau";
  }

  std::string Can::move(){
    return "Los Perros Corren...";
  }

  Can::~Can(){
  }

#endif
