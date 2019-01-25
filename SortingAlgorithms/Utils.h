#pragma once
#include <ctime>
#include <chrono>

namespace utils
{
    class __declspec(dllexport) Utils
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