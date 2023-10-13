///////////////////////////////////////////////////
//                   Asteroid
//

#include "asteroid.hpp"
#include <iostream>

Asteroid::Asteroid(double x, double y, double size, double xSpeed, double ySpeed) : FlyingObject(x, y, size)
{
    SetxSpeed(xSpeed);
    SetySpeed(ySpeed);
}

double Asteroid::GetxSpeed() { return xSpeed; }
double Asteroid::GetySpeed() { return ySpeed; }

void Asteroid::SetxSpeed(double xSpeed) { this->xSpeed = xSpeed; }
void Asteroid::SetySpeed(double ySpeed) { this->ySpeed = ySpeed; }

void Asteroid::Move()
{
    x += xSpeed;
    y += ySpeed;
}
void Asteroid::Move(double screenWidth, double screenHeight)
{
    Move();
    if (x < 0)
        x = screenWidth;
    else if (x > screenWidth)
        x = 0;
    if (y < 0)
        y = screenHeight;
    else if (y > screenHeight)
        y = 0;
}