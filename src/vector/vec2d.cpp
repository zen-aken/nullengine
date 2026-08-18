#include "vector/vec2.hpp"

// Operators
Vec2 Vec2::operator+(const Vec2 &other_vector)
{
    return Vec2{x + other_vector.x, y + other_vector.y};
}

Vec2 Vec2::operator-(const Vec2 &other_vector)
{
    return Vec2{x - other_vector.x, y - other_vector.y};
}

Vec2 Vec2::operator*(float scalar)
{
    return Vec2{x * scalar, y * scalar};
}

Vec2 Vec2::operator/(float scalar)
{
    return Vec2{x / scalar, y / scalar};
}

// Functions
Vec2 Vec2::normalize()
{
    float length = sqrt(x * x + y * y);
    return Vec2{x / length, y / length};
}

float Vec2::magnitude()
{
    return sqrt(x * x + y * y);
}

float Vec2::dotProduct(const Vec2 &other_vector)
{
    return (x * other_vector.x + y * other_vector.y);
}

float Vec2::crossProduct(const Vec2 &other_vector)
{
    return ((x * other_vector.y) - (other_vector.x * y));
}