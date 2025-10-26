#include "maze.hpp"
<<<<<<< Updated upstream

bool Maze::loadFromFile(const std::string& path)
{
    
=======
#include <fstream>
bool Maze::loadFromFile(const std::string& path)
{
    std::fstream fs(path);
    if(!fs.is_open()) return false;
    _maze_data.clear();
    std::string line;
    int y = 0;
    while(std::getline(fs, line)){
        _maze_data.push_back(line);
        for(int index =0 ; index < (int)line.size() ;  ++index)
        {
            if(line[index] == '@')
            {
                start_ = {index,y};
                _maze_data.back()[index] = '.';
            }            
        }
        ++y;
    }
    return !_maze_data.empty();
>>>>>>> Stashed changes
}

char Maze::getCell(int x, int y) const
{
<<<<<<< Updated upstream

}
bool Maze::isWalkable(int x, int y) const
{

}
bool Maze::isExit(int x, int y) const
{

}
int Maze::getWidth() const
{

}
int Maze::getHeight() const
{

=======
    if ( y < 0 || y>= getHeight() || x < 0 || x>= getWidth()) return '#';
    return  _maze_data[x][y];
}
bool Maze::isWalkable(int x, int y) const
{
    char c = getCell(x,y);
    return c == '.' || c == 'E';
}
bool Maze::isExit(int x, int y) const
{
    return getCell(x,y) == 'E';
}
int Maze::getWidth() const
{
    return _maze_data.empty() ? 0 : (int)_maze_data[0].size();
}
int Maze::getHeight() const
{
    return (int)_maze_data.size();
>>>>>>> Stashed changes
}

std::pair<int, int> Maze::getStart() const
{
<<<<<<< Updated upstream

=======
    return start_;
>>>>>>> Stashed changes
}