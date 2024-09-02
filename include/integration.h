#ifndef INTEGRATION_H
#define INTEGRATION_H

#include "body.h"
#include "vector.h"

void euler_integration(Body* body, float time_step, Vector2D force);
void verlet_integration(Body* body, float time_step, Vector2D force, Vector2D previous_position);

#endif
