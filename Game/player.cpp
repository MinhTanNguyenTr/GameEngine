#include "player.hpp"

int Player::getX() const { return x;}
int Player::getY() const { return y;}

void Player::move( int dx, int dy)
{
    x += dx;
    y += dy;
}