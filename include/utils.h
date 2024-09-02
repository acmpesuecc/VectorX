#ifndef UTILS_H
#define UTILS_H

#include <math.h>
#include <stdlib.h>

// Utility functions and common macros
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

float random_float(float min, float max);

#endif // UTILS_H
