#pragma once
#include <ctime>
#include <chrono>
#include "Data.h"
namespace utils
{
    class DllExport Utils
    {
    public:
        void startStopWatch();
        void endStopWatch();
        double getProcessDuration();

    private:
        std::chrono::time_point<std::chrono::steady_clock> m_startClock;
        std::chrono::time_point<std::chrono::steady_clock> m_endClock;
    };

}