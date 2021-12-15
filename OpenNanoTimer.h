#ifndef OPENNANOTIMER_H
#define OPENNANOTIMER_H

#include <chrono>

class OpenNanoTimer
{
/** Public functions */
public:
    OpenNanoTimer() : Seconds(0), Milliseconds(0), Microseconds(0), Nanoseconds(0)
    {
        StartTime = std::chrono::high_resolution_clock::now();
        EndTime = StartTime;
    }

    virtual void StartTimer()
    {
        StartTime = std::chrono::high_resolution_clock::now();
    }

    virtual long double EndTimer()
    {
        if(StartTime == EndTime)
        {
            return 0;
        }
        
        EndTime = std::chrono::high_resolution_clock::now();
        
        Seconds = std::chrono::duration<double, std::ratio<1, 1>>(EndTime - StartTime).count();
        Milliseconds = std::chrono::duration<double, std::milli>(EndTime - StartTime).count();
        Microseconds = std::chrono::duration<double, std::micro>(EndTime - StartTime).count();
        Nanoseconds = std::chrono::duration<double, std::nano>(EndTime - StartTime).count();
        
        return Nanoseconds;
    }
    
    virtual long double GetSeconds()
    {
       return Seconds; 
    }

    virtual long double GetMilliseconds()
    {
        return Milliseconds;
    }

    virtual long double GetMicroseconds()
    {
        return Microseconds;
    }

    virtual long double GetNanoseconds()
    {
        return Nanoseconds;
    }

/** Public variables */
public:
    long double Seconds;
    long double Milliseconds;
    long double Microseconds;
    long double Nanoseconds;

/** Protected variables */
protected:
    std::chrono::time_point<std::chrono::high_resolution_clock> StartTime;
    std::chrono::time_point<std::chrono::high_resolution_clock> EndTime;
};

#endif
