///////////////////////////////////////////////////
//                   Asteroid
// Bibliothèque encapsulant l'utilisation de SDL 2

#include <string>
#include "include/SDL2/SDL.h"

using std::string;

class Asteroid
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

    Asteroid(double x, double y, double size, double xSpeed, double ySpeed);

    //////////
    // Getters
    double GetX();
    double GetY();
    double GetXSpeed();
    double GetYSpeed();
    double GetSize();

    //////////
    // Setters
    void SetX(double x);
    void SetY(double y);
    void SetXSpeed(double xSpeed);
    void SetYSpeed(double ySpeed);
    void SetSize(double size);

    /////////////////////////
    // Déplacement de l'objet
    // déplace selon le vecteur de vitesse de l'objet
    void Move();

    ///////////////////////////////////////
    // Déplacement de l'objet avec réentrée
    // déplace selon le vecteur de vitesse de l'objet
    // en cas de sortie des limites de l'écran, fait réapparaitre l'objet
    // de l'autre côté
    // -------
    // * screenWidth, screenHeight : taille de l'écran
    void Move(double screenWidth, double screenHeight);

private:
    double x;
    double y;
    double size;
    double xSpeed;
    double ySpeed;
};