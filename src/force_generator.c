#include "../include/body.h"
#include "../include/force_generator.h"

void apply_constant_force(Body* body, Vector2D force){
    Vector2D accleration;
    accleration.x = force.x/body->mass;
    accleration.y = force.y/body->mass;
    body->velocity.x = body->velocity.x;
}
void apply_gravity(Body* body, float gravity_strength){

}
void apply_drag(Body* body, float drag_coefficient){

}

