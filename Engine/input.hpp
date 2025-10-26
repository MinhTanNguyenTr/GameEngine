#ifndef INPUT_H_
#define INPUT_H_

class Input
{
    private:
    public:
    Input() = default;
    ~Input() = default;
    Input(Input& other) = delete;
    Input& operator=(Input& other) = delete;
    char getKey();
};
#endif