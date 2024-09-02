#ifndef FORCE_GENERATOR_H
#define FORCE_GENERATOR_H

#include "body.h"

typedef struct {
    Vector2D force;
    float duration;
} Force;

void apply_constant_force(Body* body, Vector2D force);
void apply_gravity(Body* body, float gravity_strength);
void apply_drag(Body* body, float drag_coefficient);

#endif // FORCE_GENERATOR_H
