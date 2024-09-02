#ifndef CONSTRAINT_H
#define CONSTRAINT_H

#include "body.h"

typedef struct {
    Body* body1;
    Body* body2;
    float rest_length;
    float stiffness;
} Spring;

void apply_spring_force(Spring* spring);

#endif // CONSTRAINT_H
