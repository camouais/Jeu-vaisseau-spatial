///////////////////////////////////////////////////
//                   Missile
//
#ifndef MISSILE_HPP_
#define MISSILE_HPP_

#include "flyingObject.hpp"

class Missile : public FlyingObject
{
public:
    Missile(double x, double y, double size, double speed, double m_angle);

    //////////
    // Getters
    double GetSpeed();
    double GetAngle();

    //////////
    // Setters
    void SetSpeed(double speed);
    void SetAngle(double m_angle);

    bool move(double screenWidth, double screenHeight);

private:
    double speed;
    double m_angle;
};
#endif