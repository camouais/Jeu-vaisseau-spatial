///////////////////////////////////////////////////
//                   Asteroid
// Bibliothèque encapsulant l'utilisation de SDL 2
#ifndef ASTEROID_HPP_
#define ASTEROID_HPP_

#include "flyingObject.hpp"
class Asteroid : public FlyingObject
{
public:
    Asteroid(double x, double y, double size, double xSpeed, double ySpeed);
    //////////
    // Getters
    double GetxSpeed();
    double GetySpeed();

    //////////
    // Setters
    void SetxSpeed(double xSpeed);
    void SetySpeed(double ySpeed);
    /////////////////////////
    // Déplacement de l'objet
    // déplace selon le vecteur de vitesse de l'objet
    void Move();
    void Move(double screenWidth, double screenHeight);

    ///////////////////////////////////////
    // Déplacement de l'objet avec réentrée
    // déplace selon le vecteur de vitesse de l'objet
    // en cas de sortie des limites de l'écran, fait réapparaitre l'objet
    // de l'autre côté
    // -------
    // * screenWidth, screenHeight : taille de l'écran

private:
    double xSpeed;
    double ySpeed;
};

#endif