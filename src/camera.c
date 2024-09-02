#include "../include/vector.h"
#include "../include/camera.h"

Camera create_camera(Vector2D position, float zoom){
    Camera camera;
    camera.position = position;
    camera.zoom = zoom;
    return camera;
}
void move_camera(Camera* camera, Vector2D direction){
    camera->position = add_vectors(camera->position,direction);
}
void zoom_camera(Camera* camera, float zoom_factor){
    camera->zoom = camera->zoom*zoom_factor;
}


   