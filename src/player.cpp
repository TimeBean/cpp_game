#include "../include/player.h"
#include <iostream>

Player::Player(char glyph, Position position){
  this->glyph = glyph;
  this->position = position;
}

Position getPosition(){
  return position;
}
