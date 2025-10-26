#ifndef MAZE_H_
#define MAZE_H_
#include <utility>
#include <vector>
#include <string>
class Maze {
    private:
<<<<<<< Updated upstream
    std::vector<std::string> data;
=======
    std::vector<std::string> _maze_data;
>>>>>>> Stashed changes
    std::pair<int, int> start_ {0,0};
    public:
    Maze() = default;
    ~Maze() = default;
    Maze(Maze& other);
    Maze& operator=(Maze& other);
    bool loadFromFile(const std::string& path);
    char getCell(int x, int y) const;
    bool isWalkable(int x, int y) const;
    bool isExit(int x, int y) const;
    int getWidth() const;
    int getHeight() const;

    std::pair<int, int> getStart() const;

};
#endif