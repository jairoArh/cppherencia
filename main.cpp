#include <iostream>
#include "Can.h"
#include "Snake.cpp"

using namespace std;

int main(){
  Can *jack = new Can();
  
  Snake *boa = new Snake("Vibora","Luxemers anfibuiis");

  cout<<boa->getAntidote()<<" "<<boa->speak()<<endl;
  cout<<boa->move()<<endl;


  cout << jack->isTrained()<<endl;
  
  return 0;
}
