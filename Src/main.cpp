#include "App.hpp"

int main(int argc, char** argv) {
    App app;
    app.init(argc > 1 ? argv[1] : "assets/maze1.txt");
    app.run();
    app.shutdown();
    return 0;
}
