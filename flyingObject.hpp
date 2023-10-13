///////////////////////////////////////////////////
//                   FlyingObject
// Bibliothèque encapsulant l'utilisation de SDL 2
#ifndef FLYINGOBJECT_HPP_
#define FLYINGOBJECT_HPP_

#include <string>
#include <cmath>
#include "include/SDL2/SDL.h"

class FlyingObject
{
public:
    /////////////////////////////////
    // CONSTRUCTEUR ET DESTRUCTEUR //
    /////////////////////////////////

    //////////////////////////////////////////////
    // Constructeur.
    // Lance l'affichage plein écran dans la résolution courante
    // --------
    // *double x : coordonnée de l’astéroïde à l’écran
    // *double y : coordonnée de l’astéroïde à l’écran
    // *double size : diamètre de l'objet
    // *double xSpeed : coordonnée (on parle aussi de composantes) du vecteur de vitesse
    // *double ySpeed) :coordonnée (on parle aussi de composantes) du vecteur de vitesse
    // Constructeur avec cinq paramètres distincts

    FlyingObject(double x, double y, double size);

    //////////
    // Getters
    double GetX();
    double GetY();
    double GetSize();

    //////////
    // Setters
    void SetX(double x);
    void SetY(double y);
    void SetSize(double size);
    // void Move();
    // void Move(double screenWidth, double screenHeight);
    static bool Collide(FlyingObject o1, FlyingObject o2);

protected:
    double x;
    double y;
    double size;
};

#endif