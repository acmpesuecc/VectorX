#include "../include/vector.h"
#include <stdio.h>
#include <math.h>
Vector2D create_vector(float x, float y){
    Vector2D new_vector;
    new_vector.x = x;
    new_vector.y= y;
    return new_vector;
}

Vector2D add_vectors(Vector2D v1, Vector2D v2){
    Vector2D new_vector = create_vector(v1.x+v2.x, v1.y+v2.y);
    return new_vector;
}

Vector2D subtract_vectors(Vector2D v1, Vector2D v2){
    Vector2D new_vector = create_vector(v1.x-v2.x, v1.y-v2.y);
    return new_vector;
}

Vector2D multiply_vector(Vector2D v, float scalar){
    Vector2D new_vector;
    new_vector.x = v.x * scalar;
    new_vector.y = v.y * scalar;
    return new_vector;
}

float dot_product(Vector2D v1, Vector2D v2){
    return (v1.x * v2.x + v1.y * v2.y);
}

float magnitude(Vector2D v){
    return sqrt(v.x*v.x + v.y*v.y);
}
Vector2D normalize(Vector2D v){
    Vector2D new_vector;
    float mag = magnitude(v);
    if (mag == 0.0f) {
        new_vector.x = 0.0f;
        new_vector.y = 0.0f;
    } 
    else {
        new_vector.x = v.x / mag;
        new_vector.y = v.y / mag;
    }
    return new_vector;
}

float distance(Vector2D v1, Vector2D v2){
    return sqrt(((v1.x-v2.x)*(v1.x-v2.x))+((v1.y-v2.y)*(v1.y-v2.y)));
}
int main() {
    Vector2D v1 = create_vector(1.0f, 2.0f);
    Vector2D v2 = create_vector(3.0f, 4.0f);
    Vector2D result = add_vectors(v1, v2);
    printf("Result of addition: (%f, %f)\n", result.x, result.y);
    Vector2D result1 = subtract_vectors(v1, v2);
    printf("Result of subtraction: (%f, %f)\n", result1.x, result1.y);
    Vector2D result2 = multiply_vector(v1, 2.0f);
    printf("Result of multiplication: (%f, %f)\n", result2.x, result2.y);
    float dot = dot_product(v1, v2);
    printf("Dot product: %f\n", dot);
    float mag = magnitude(v1);
    printf("Magnitude of v1: %f\n", mag);
    Vector2D norm = normalize(v1);
    printf("Normalized v1: (%f, %f)\n", norm.x, norm.y);
    float dist = distance(v1, v2);
    printf("Distance between v1 and v2: %f\n", dist);
    return 0;
}