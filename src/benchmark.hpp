#ifndef BENCHMARK_H_
#define BENCHMARK_H_

#include <chrono>

class Timer
{
public:
    Timer(double* time_us_);
    ~Timer();
    void Stop();
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimePoint;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_EndTimePoint;    
    double* m_time_us;
};

#endif