#ifndef PHYSICS_WORLD_H
#define PHYSICS_WORLD_H

#include "body.h"
#include "collision.h"

typedef struct {
    Body* bodies;
    int body_count;
    float gravity;
} PhysicsWorld;

PhysicsWorld create_physics_world(float gravity);
void add_body(PhysicsWorld* world, Body body);
void simulate_physics(PhysicsWorld* world, float time_step);

#endif // PHYSICS_WORLD_H
