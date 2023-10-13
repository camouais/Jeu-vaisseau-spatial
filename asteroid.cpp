///////////////////////////////////////////////////
//                   Asteroid
// Bibliothèque encapsulant l'utilisation de SDL 2

#include "asteroid.hpp"
#include <iostream>
//////////////////////////////////////////////
// Constructeur, lance l'affichage plein écran
// --------
// *double x : coordonnée de l’astéroïde à l’écran
// *double y : coordonnée de l’astéroïde à l’écran
// *double size : diamètre de l'objet
// *double xSpeed : coordonnée (on parle aussi de composantes) du vecteur de vitesse
// *double ySpeed) :coordonnée (on parle aussi de composantes) du vecteur de vitesse

Asteroid::Asteroid(double x, double y, double size, double xSpeed, double ySpeed)
{
    this->x = x;
    this->y = y;
    this->size = size;
    this->xSpeed = xSpeed;
    this->ySpeed = ySpeed;
}
//////////
// Getters
double Asteroid::GetX() { return x; }
double Asteroid::GetY() { return y; }
double Asteroid::GetXSpeed() { return xSpeed; }
double Asteroid::GetYSpeed() { return ySpeed; }
double Asteroid::GetSize() { return size; }
//////////
// Setters
void Asteroid::SetX(double x) { this->x = x; }
void Asteroid::SetY(double y) { this->y = y; }
void Asteroid::SetXSpeed(double xSpeed) { this->xSpeed = xSpeed; }
void Asteroid::SetYSpeed(double ySpeed) { this->ySpeed = ySpeed; }
void Asteroid::SetSize(double size) { this->size = size; }
void Asteroid::Move()
{
    x += xSpeed;
    y += ySpeed;
}
void Asteroid::Move(double screenWidth, double screenHeight)
{
    x += xSpeed;
    y += ySpeed;
    (x > 0) ? x = screenWidth: ;
    (x > screenWidth) ? x = 0: ;
    (y < 0) ? y = screenHeight: ;
    (y > screenHeight) ? y = 0: ;
}