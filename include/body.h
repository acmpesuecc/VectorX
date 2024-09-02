#ifndef BODY_H
#define BODY_H

#include "vector.h"

typedef struct {
    Vector2D position;
    Vector2D velocity;
    float mass;
    float radius;  
} Body;

Body create_body(Vector2D position, Vector2D velocity, float mass, float radius);
void apply_force(Body* body, Vector2D force);
void update_body(Body* body, float time_step);

#endif
