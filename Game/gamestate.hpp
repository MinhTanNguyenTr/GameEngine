#ifndef GAMESTATE_H_
#define GAMESTATE_H_

class GameState {
    private:
    bool win = false;
    public:
    GameState() = default;
    ~GameState() = default;
    GameState(GameState& other);
    GameState& operator=(GameState& other);
    bool isGameOver() const;
    bool isWin() const;
    void setWin(bool win);
};
#endif