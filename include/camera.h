#ifndef CAMERA_H
#define CAMERA_H

#include "vector.h"

typedef struct {
    Vector2D position;
    float zoom;
} Camera;

Camera create_camera(Vector2D position, float zoom);
void move_camera(Camera* camera, Vector2D direction);
void zoom_camera(Camera* camera, float zoom_factor);

#endif // CAMERA_H

   