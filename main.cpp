#include <iostream>
#include "include/player.h"

int WIDTH = 10;
int HEIGHT = 15;

int main(){
  Position playerStartPosition(3, 3);
  Player player('@', playerStartPosition);

  for (int i = 0; i < WIDTH; i++) {
    for(int j = 0; j < HEIGHT; j++){
      if (player.getPosition().getX() == i && player.getPosition().getY() == j){
        std::cout << "@";
      }
      else{
        std::cout << ".";
      }
    }

    std::cout << std::endl;
  }

  return 0;
}
