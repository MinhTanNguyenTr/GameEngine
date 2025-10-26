#include "renderer.hpp"
<<<<<<< Updated upstream

=======
#include "maze.hpp"
#include "player.hpp"
#include <iostream>

static void clear_console() {
    std::cout << "\x1B[2J\x1B[H";
}

void Renderer::render(const Maze& maze, const Player& player) {
    clear_console();
    for (int y = 0; y < maze.getHeight(); ++y) {
        for (int x = 0; x < maze.getWidth(); ++x) {
            if (x == player.getX() && y == player.getY()) {
                std::cout << '@';
            } else {
                std::cout << maze.getCell(x, y);
            }
        }
        std::cout << '\n';
    }
    std::cout << "Use WASD + Enter to move. Press Q to quit.\n";
}
>>>>>>> Stashed changes
