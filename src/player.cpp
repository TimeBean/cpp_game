#include "../include/player.h"
#include <iostream>

Player::Player(char glyph, const Position& pos)
    : glyph(glyph), position(pos)
{
}

Position Player::getPosition(){
  return position;
}
