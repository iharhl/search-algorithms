#include "benchmark.hpp"

using namespace std::chrono;

Timer::Timer(std::shared_ptr<size_t> time_us_)
{
    m_time_us = time_us_;
    m_StartTimePoint = high_resolution_clock::now();
}

Timer::~Timer()
{
    Stop();
}

void Timer::Stop()
{
    m_EndTimePoint = high_resolution_clock::now();

    auto start = time_point_cast<nanoseconds>(m_StartTimePoint).time_since_epoch().count();
    auto end = time_point_cast<nanoseconds>(m_EndTimePoint).time_since_epoch().count();

    auto duration = end - start;
    *m_time_us = duration;
}
