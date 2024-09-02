#include "./vector.c"
#include "../include/body.h"
#include <stdio.h>

Body create_body(Vector2D position, Vector2D velocity, float mass, float radius){
    Body new_body;
    new_body.position = position;
    new_body.velocity = velocity;
    new_body.mass = mass;
    new_body.radius = radius;
    return new_body;
}
void apply_force(Body* body, Vector2D force){
    Vector2D acceleration;
    acceleration.x = force.x/body->mass;
    acceleration.y = force.y/body->mass;
    body->velocity.x += acceleration.x;
    body->velocity.y += acceleration.y;
}
void update_body(Body* body, float time_step){
    body->position.x += body->velocity.x * time_step;
    body->position.y += body->velocity.y * time_step;
}

int main() {
    Vector2D initial_position = create_vector(0.0f, 0.0f);
    Vector2D initial_velocity = create_vector(0.0f, 0.0f);
    Body body = create_body(initial_position, initial_velocity, 1.0f, 1.0f);
    Vector2D force = create_vector(10.0f, 5.0f);
    apply_force(&body, force);
    printf("After applying force:\n");
    printf("Position: (%f, %f)\n", body.position.x, body.position.y);
    printf("Velocity: (%f, %f)\n", body.velocity.x, body.velocity.y);
    float time_step = 1.0f;
    update_body(&body, time_step);
    printf("After updating body:\n");
    printf("Position: (%f, %f)\n", body.position.x, body.position.y);
    printf("Velocity: (%f, %f)\n", body.velocity.x, body.velocity.y);

    return 0;
}