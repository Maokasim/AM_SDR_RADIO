#ifndef LOGGER_H
#define LOGGER_H

#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

class Logger
{
public:
    Logger();
    void logMsg(const std::string &msg);
    void logErr(const std::string &msg);

private:
    /// @brief function to return current time in log desired format
    /// @return string current time in format "%Y-%m-%d %H:%M:%S"
    std::string getTime();

    //Config
    static constexpr char* filePath_ = "./log.csv";
};

#endif