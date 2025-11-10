#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

  class Animal{
    public:
      Animal(){
        specie = "NN";
      }
      Animal(std::string specie){
        setSpecie(specie);
      }

      void setSpecie(std::string specie){
        Animal::specie = specie;
      }

      std::string getSpecie(){
        return specie;
      }

      virtual std::string move() = 0;

      std::string speak(){
        return "Los Animales no Hablan";
      }

      ~Animal(){}

    protected:
      std::string specie;
  };

#endif
