<<<<<<< Updated upstream
#ifndef LOGGER_H_
#define LOGGER_H_
#include <string>
class Logger {
    public:
    static void Log(const std::string& log);
};
#endif
=======
#pragma once
#include <string>

namespace utils {
struct Logger {
    static void log(const std::string& msg);
};
}
>>>>>>> Stashed changes
