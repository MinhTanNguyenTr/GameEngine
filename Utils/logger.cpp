#include "logger.hpp"
#include <iostream>
#include <chrono>
#include <ctime>

namespace utils {
void Logger::log(const std::string& msg) {
    using namespace std::chrono;
    auto now = system_clock::now();
    std::time_t t = system_clock::to_time_t(now);
    char buf[32];
    std::strftime(buf, sizeof(buf), "%F %T", std::localtime(&t));
    std::cout << "[LOG " << buf << "] " << msg << '\n';
}
}
