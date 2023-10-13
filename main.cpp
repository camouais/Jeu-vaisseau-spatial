#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;
#include <iostream>
#include "framework.hpp"
#include "asteroid.hpp"

int main(int argc, char *argv[])
{

        Framework f(1, 50, 50);
        Asteroid a(0, 0, 50, 50, 2);
        // Récupére la position centrée du missile sur  la fenêtre
        int m_width = static_cast<int>((f.GetScreenWidth() - 50) / 2);
        int m_height = static_cast<int>((f.GetScreenHeight() - 50) / 2);
        while (f.GetInput() != SDLK_ESCAPE)
        { // Dessinez le missile (rectangle) au centre de l'écran
                f.DrawMissile(m_width, m_height);
                // // Déplacement de l'astéroïde
                a.Move(f.GetScreenWidth(), f.GetScreenHeight());

                // Dessin de l'astéroïde
                f.DrawAsteroid(static_cast<int>(a.GetX()), static_cast<int>(a.GetY()), static_cast<int>(a.GetSize()));

                f.Update();
        }
        return 0;
}
