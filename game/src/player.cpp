#include "../include/player.h"

Player::Player(char glyph, const Position& pos) : glyph(glyph), position(pos) {	}

Position Player::getPosition() {
	return position;
}

char Player::getGlyph() {
	return glyph;
}
