#pragma once

#include <math.h>

struct Vec2
{
    float x, y;

    Vec2 operator+(const Vec2 &other_vector);
    Vec2 operator-(const Vec2 &other_vector);
    Vec2 operator*(float scalar);
    Vec2 operator/(float scalar);

    Vec2 normalize();
    float magnitude();
    float dotProduct(const Vec2 &other_vector);
    float crossProduct(const Vec2 &other_vector);
};