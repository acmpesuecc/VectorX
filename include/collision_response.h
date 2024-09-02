#ifndef COLLISION_RESPONSE_H
#define COLLISION_RESPONSE_H

#include "body.h"
#include "collision.h"

void apply_impulse(Body* body1, Body* body2, CollisionInfo collision);
void handle_collision_response(Body* body1, Body* body2, CollisionInfo collision);

#endif