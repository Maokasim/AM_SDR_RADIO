#include "logger.h"

Logger::Logger()
{
}

void Logger::logMsg(const std::string &msg)
{
    std::ofstream file(filePath_, std::ios::app);

    file << getTime() << ',' << "MESSAGE" << ',' << msg << '\n';
}

void Logger::logErr(const std::string &err)
{
    std::ofstream file(filePath_, std::ios::app);

    file << getTime() << ',' << "ERROR" << ',' << err << '\n';
}

std::string Logger::getTime()
{
    std::time_t now = std::time(nullptr);
    std::stringstream nowStream;
    nowStream << std::put_time(std::localtime(&now), "%Y-%m-%d %H:%M:%S");

    return nowStream.str();
}