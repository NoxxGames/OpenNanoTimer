## OpenNanoTimer, A Simple C++ High Res Timer Using Chrono.
A simple C++ high resolution timer, using the chrono library.

Ability to easily Start & Stop the timer, then get the output in
Seconds, Milliseconds, Microseconds, and Nanoseconds.

## How To Use
```c++
/** Include the header. */
#include "OpenNanoTimer.h"

/** First declare a new timer. */
OpenNanoTimer Timer;

/** Then start it. */
Timer.StartTimer();

/**
 * Do some work...
 */

/** End the timer. The output can now be accessed
 *  through two ways.
 *  For example, the get the amount of seconds we could do:
 *      Timer.GetSeconds();
 *  OR
 *      Timer.Seconds;
 */
Timer.EndTimer();

/** Get the amount of seconds, using the function in this case. */
const long double Seconds = Timer.GetSeconds();

/**
 * Printing the values.
 * This section show how to print the values, at varrying lengths.
 */

/** Using %g, we're that we want the best fit. */
printf("Seconds: %g\n", Seconds);

/** Using %0.12g, we're saying that we want at least 12 digits
 *  both before and after the decimal. */
printf("Seconds: %12.12g\n", Seconds);

/** For further help with printing floats/doubles, see the link below:
 *  https://www.lemoda.net/c/double-decimal-places */
```
