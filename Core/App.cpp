#include "App.hpp"
#include "maze.hpp"
#include "player.hpp"
#include "renderer.hpp"
#include "input.hpp"
#include "gamestate.hpp"
#include "logger.hpp"

#include <iostream>
#include <stdexcept>
App::App() = default;
App::~App() = default;


void App::init(const std::string& mapPath) {
    utils::Logger::log("App init");
    maze_ = std::make_unique<Maze>();
    if (!maze_->loadFromFile(mapPath)) {
        utils::Logger::log("Failed to load map: " + mapPath);
        throw std::runtime_error("Map load failure");
    }
    auto start = maze_->getStart();
    player_ = std::make_unique<Player>(start.first, start.second);
    renderer_ = std::make_unique<Renderer>();
    input_ = std::make_unique<Input>();
    state_ = std::make_unique<GameState>();
}

void App::run() {
    utils::Logger::log("App run");
    while (!state_->isGameOver()) {
        render();
        char cmd = input_->getKey();
        if (cmd == '\0') {
            utils::Logger::log("EOF on input, exiting");
            break;
        }
        if (cmd == 'q' || cmd == 'Q') {
            utils::Logger::log("Quit command received");
            break;
        }
        update(cmd);
    }

    render();
    if (state_->isWin()) {
        std::cout << "You win! 🎉\n";
    } else {
        std::cout << "Game over. Bye.\n";
    }
}

void App::shutdown() {
    utils::Logger::log("App shutdown");
    // smart pointers auto free
}

void App::update(char cmd) {
    int dx = 0, dy = 0;
    switch (cmd) {
        case 'w': case 'W': dy = -1; break;
        case 's': case 'S': dy = 1; break;
        case 'a': case 'A': dx = -1; break;
        case 'd': case 'D': dx = 1; break;
        default: return;
    }
    int nx = player_->getX() + dx;
    int ny = player_->getY() + dy;
    if (maze_->isWalkable(nx, ny)) {
        player_->move(dx, dy);
        if (maze_->isExit(player_->getX(), player_->getY())) {
            state_->setWin(true);
        }
    } else {
        utils::Logger::log("Bumped into wall at (" + std::to_string(nx) + "," + std::to_string(ny) + ")");
    }
}

void App::render() {
    renderer_->render(*maze_, *player_);
}
