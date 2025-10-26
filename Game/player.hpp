#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
    private:
    int x;
    int y;
    public:
    Player(int x = 0 , int y = 0);
    void move(int dx, int dy);
    int getX() const;
    int getY() const;
};

#endif