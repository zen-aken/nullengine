#include <iostream>
#include "vector/vec2d.hpp"

Vec2 direction{0.0f, 0.0f};
Vec2 velocity{0.0f, 0.0f};
Vec2 acceleration{0.0f, 0.0f};
Vec2 gravity{0.0f, -9.81f};

float delta = 1.0f / 60.0f;
float speed = 20.0f;

int main()
{
    Vec2 position{2.0f, 4.0f};
    Vec2 target{10.0f, 5.0f};

    direction = (target - position).normalize();
    velocity = direction * speed;
    acceleration = acceleration + gravity;

    int count = 0;
    printf("position; x: %f, y: %f\n", position.x, position.y);
    while (count <= 60)
    {
        velocity = velocity + acceleration * delta;
        position = position + velocity * delta;
        printf("position; x: %f, y: %f\n", position.x, position.y);
        count++;
    }
}