#include "gamestate.hpp"

bool GameState::isGameOver() const
{
    return win;
}
bool GameState::isWin() const
{
    return win;
}
void GameState::setWin(bool win)
{
    this->win = win;
}