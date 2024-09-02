#ifndef COLLISION_H
#define COLLISION_H

#include "body.h"

typedef struct {
    int is_colliding;
    Vector2D collision_normal;
    float penetration_depth;
} CollisionInfo;

CollisionInfo check_collision(Body* body1, Body* body2);
void resolve_collision(Body* body1, Body* body2, CollisionInfo collision);

#endif