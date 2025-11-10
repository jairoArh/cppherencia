#include "Snake.h"
#include "Animal.h"

Snake::Snake():Animal(){
  Snake::antidote = "Rezar...";
}

Snake::Snake(std::string specie, std::string antidote):Animal(specie),antidote(antidote){}

void Snake::setAntidote(std::string antidote){
  Snake::antidote = antidote;
}

std::string Snake::getAntidote(){
  return this->antidote;
}

std::string Snake::move(){
  return "La(o)s " + Animal::specie + " reptan";
}

Snake::~Snake(){

}
