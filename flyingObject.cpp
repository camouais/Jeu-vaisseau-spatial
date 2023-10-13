///////////////////////////////////////////////////
//                   Asteroid
//

#include "flyingObject.hpp"
#include <iostream>

FlyingObject::FlyingObject(double x, double y, double size)
{
    this->x = x;
    this->y = y;
    this->size = size;
}

double FlyingObject::GetX() { return x; }
double FlyingObject::GetY() { return y; }
double FlyingObject::GetSize() { return size; }
static bool FlyingObject::Collide(FlyingObject o1, FlyingObject o2)
{
    double dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    return dist < (o1.radius + o2.radius);
}
void FlyingObject::SetSize(double t_size) { this->size = t_size; }
