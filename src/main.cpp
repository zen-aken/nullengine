#include <iostream>
#include "vector/vec2.hpp"

int main()
{
    Vec2 position{2, 4};
    Vec2 target{10, 5};
    Vec2 direction = (target - position).normalize();

    Vec2 gravity{0, -9.81};
    int speed = 300;

    int count = 0;
    float delta = 1.0f / 60.0f;
    printf("position; x: %f, y: %f\n", position.x, position.y);
    while (count <= 60)
    {
        position = position + direction * gravity * speed * delta;

        printf("position; x: %f, y: %f\n", position.x, position.y);
        count++;
    }
}