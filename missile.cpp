///////////////////////////////////////////////////
//                   Missile
//

#include "missile.hpp"
#include <iostream>
#include <math.h>

Missile::Missile(double x, double y, double size, double speed, double m_angle) : FlyingObject(x, y, size)
{
    SetSpeed(speed);
    SetAngle(m_angle);
}

double Missile::GetSpeed() { return speed; }
double Missile::GetAngle() { return m_angle; }

void Missile::SetSpeed(double speed) { this->speed = speed; }
void Missile::SetAngle(double m_angle) { this->m_angle = m_angle; }

bool Missile::move(double screenWidth, double screenHeight)
{
    // Calcul des nouvelles coordonnées du missile en fonction de l'angle et de la vitesse
    double radians = m_angle * (M_PI / 180.0); // Conversion de degrés en radians
    double newX = x + speed * cos(radians);
    double newY = y + speed * sin(radians);

    // Vérification de la sortie de l'écran
    if (newX < 0 || newX > screenWidth || newY < 0 || newY > screenHeight)
    {
        // Le missile est sorti de l'écran, retournez true
        return true;
    }

    // Mettez à jour les coordonnées du missile
    x = newX;
    y = newY;

    // Le missile est toujours dans l'écran, retournez false
    return false;
}