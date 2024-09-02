#include "../include/collision.h"
#include "../include/body.h"
#include "../include/vector.h"
#include <stdbool.h>

typedef struct {
    int is_colliding;
    Vector2D collision_normal;
    float penetration_depth;
} CollisionInfo;

CollisionInfo check_collision(Body* body1, Body* body2){
    CollisionInfo info;
    Vector2D distance_vector = subtract_vectors(body2->position, body1->position);
    float combined_radius = body1->radius + body2->radius;
    float dist = magnitude(distance_vector);
    if (dist < combined_radius) {
        info.is_colliding = 1;
        info.collision_normal = normalize(distance_vector);
        info.penetration_depth = combined_radius - dist;
    } else {
        info.is_colliding = 0;
    }
    return info;
}
void resolve_collision(Body* body1, Body* body2, CollisionInfo collision){
    if (!collision.is_colliding) return;
    Vector2D correction = multiply_vector(collision.collision_normal, collision.penetration_depth / 2.0f);
    body1->position = subtract_vectors(body1->position, correction);
    body2->position = add_vectors(body2->position, correction);
    float relative_velocity = dot_product(subtract_vectors(body2->velocity, body1->velocity), collision.collision_normal);
    Vector2D impulse = multiply_vector(collision.collision_normal, relative_velocity);
    body1->velocity = subtract_vectors(body1->velocity, impulse);
    body2->velocity = add_vectors(body2->velocity, impulse);
}
