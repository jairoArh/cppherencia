#include "Cat.h"

Cat::Cat():Animal(),lives(0){}

Cat::Cat(std::string specie,int lives):Animal(specie),lives(lives){}

void Cat::setLives(int lives){
  Cat::lives = lives;
}

int Cat::getLives(){
  return Cat::lives;
}

std::string Cat::move(){
  return "El " + Animal::specie + " Camina, corre, salta!!\n";
}

std::string Cat::speak(){
  return "Los Gatos dicen Miaauuuu!!\n";
}

Cat::~Cat(){

}
