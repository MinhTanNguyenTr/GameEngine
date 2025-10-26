#pragma once
#include <memory>
#include <string>

class Maze;
class Player;
class Renderer;
class Input;
class GameState;

class App {
<<<<<<< Updated upstream
    private:
    
    public:
    App();
    ~App();
    void init();
    void run();
    void shutdown();
=======
public:
    App();
    ~App();

    void init(const std::string& mapPath);
    void run();
    void shutdown();

private:
    std::unique_ptr<Maze> maze_;
    std::unique_ptr<Player> player_;
    std::unique_ptr<Renderer> renderer_;
    std::unique_ptr<Input> input_;
    std::unique_ptr<GameState> state_;

    void update(char cmd);
    void render();
>>>>>>> Stashed changes
};
