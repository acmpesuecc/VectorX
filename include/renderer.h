#ifndef RENDERER_H
#define RENDERER_H

#include "physics_world.h"

void initialize_renderer();
void render_body(Body* body);
void render_world(PhysicsWorld* world);
void cleanup_renderer();

#endif // RENDERER_H
