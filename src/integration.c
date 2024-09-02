#include "../include/body.h"
#include "../include/integration.h"

void euler_integration(Body* body, float time_step, Vector2D force){
    Vector2D accleration;
    accleration.x = force.x / body->mass;
    accleration.y = force.y / body->mass;
    body->velocity.x = body->velocity.x + (accleration.x * time_step);
    body->velocity.y = body->velocity.y + (accleration.y * time_step);
    body->position.x = body->position.x + (body->velocity.x * time_step);
    body->position.y = body->position.y + (body->velocity.y * time_step);
}
void verlet_integration(Body* body, float time_step, Vector2D force, Vector2D previous_position) {
    Vector2D acceleration;
    acceleration.x = force.x / body->mass;
    acceleration.y = force.y / body->mass;
    Vector2D new_position;
    new_position.x = 2 * body->position.x - previous_position.x + acceleration.x * time_step * time_step;
    new_position.y = 2 * body->position.y - previous_position.y + acceleration.y * time_step * time_step;
    body->velocity.x = (new_position.x - previous_position.x) / (2 * time_step);
    body->velocity.y = (new_position.y - previous_position.y) / (2 * time_step);
    body->position = new_position;
}