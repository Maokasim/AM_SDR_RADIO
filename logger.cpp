#include "logger.h"

void Logger::logErr(const std::string& msg)
{
    std::ofstream file("log.csv", std::ios::app);

    std::time_t now = std::time(nullptr);

    file << std::put_time(std::localtime(&now), "%Y-%m-%d %H:%M:%S") << ','
         << "ERROR" << ','
         << msg << '\n';
}
