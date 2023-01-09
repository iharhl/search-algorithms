#ifndef BENCHMARK_H_
#define BENCHMARK_H_

#include <chrono>
#include <memory>

class Timer
{
public:
    Timer(std::shared_ptr<size_t> time_us_);
    ~Timer();
    void Stop();
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimePoint;
    std::chrono::time_point<std::chrono::high_resolution_clock> m_EndTimePoint;    
    std::shared_ptr<size_t> m_time_us;
};

#endif