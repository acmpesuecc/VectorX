#ifndef MATERIAL_H
#define MATERIAL_H

typedef struct {
    float friction;
    float restitution;  // Bounciness
} Material;

Material create_material(float friction, float restitution);

#endif // MATERIAL_H
