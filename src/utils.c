#include <math.h>
#include <stdlib.h>
#include "../include/utils.h"

float random_float(float min, float max) {
    return min + (max - min) * ((float)rand() / RAND_MAX);
}
