#ifndef RENDERER_H_
#define RENDERER_H_
#include "maze.hpp"
#include "player.hpp"
class Renderer{
    private:
    public:
    Renderer() = default;
    ~Renderer() = default;
    void render(const Maze& maze, const Player& player);
};
#endif