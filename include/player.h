#ifndef PLAYER_H
#define PLAYER_H

#include "position.h"

class Player {
private:
    char glyph;
    Position position;

public:
    Player(char glyph, const Position& position);
    Position getPosition();
};

#endif
