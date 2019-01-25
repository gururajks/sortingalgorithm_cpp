#include "stdafx.h"
#include "Utils.h"


namespace utils
{
    void Utils::startStopWatch()
    {
        m_startClock = std::chrono::steady_clock::now();
    }

    void Utils::endStopWatch()
    {
        m_endClock = std::chrono::steady_clock::now();
    }

    double Utils::getProcessDuration()
    {
        std::chrono::duration<double> duration = (m_endClock - m_startClock);
        return duration.count();
    }
}
