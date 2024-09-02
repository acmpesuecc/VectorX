#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    float x; 
    float y;
} Vector2D;

Vector2D create_vector(float x, float y);

Vector2D add_vectors(Vector2D v1, Vector2D v2);

Vector2D subtract_vectors(Vector2D v1, Vector2D v2);

Vector2D multiply_vector(Vector2D v, float scalar);

float dot_product(Vector2D v1, Vector2D v2);

float magnitude(Vector2D v);

Vector2D normalize(Vector2D v);

float distance(Vector2D v1, Vector2D v2);

#endif
