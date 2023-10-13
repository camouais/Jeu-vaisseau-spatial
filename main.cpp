#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
#include <iostream>
#include "framework.hpp"
#include "asteroid.hpp"
#include "flyingObject.hpp"
#include "missile.hpp"

int main(int argc, char *argv[])
{
        Framework f(60, 800, 600); // Utilisez les dimensions de l'écran appropriées
        Asteroid a(400, 0, 50, 12, 1);

        int m_width = static_cast<int>((f.GetScreenWidth() - 50) / 2);
        int m_height = static_cast<int>((f.GetScreenHeight() - 50) / 2);
        std::vector<Missile *> missiles;
        while (f.GetInput() != SDLK_ESCAPE)
        {
                if (f.GetInput() == SDLK_SPACE)
                {
                        // Créez un missile au milieu de l'écran, avec une vitesse de 5 et un angle de 0 degrés (vers la droite)
                        int m_width = static_cast<int>(f.GetScreenWidth() / 2);
                        int m_height = static_cast<int>(f.GetScreenHeight() / 2);
                        Missile *newMissile = new Missile(m_width, m_height, 10.0, 5.0, 0.0);
                        missiles.push_back(newMissile);
                }

                // Déplacez l'astéroïde et affichez-le
                a.Move(f.GetScreenWidth(), f.GetScreenHeight());
                f.DrawAsteroid(static_cast<int>(a.GetX()), static_cast<int>(a.GetY()), static_cast<int>(a.GetSize()));

                // Déplacez les missiles et supprimez ceux qui sortent de l'écran
                for (std::vector<Missile *>::iterator it = missiles.begin(); it != missiles.end();)
                {
                        if ((*it)->move(f.GetScreenWidth(), f.GetScreenHeight()))
                        {
                                // Le missile est sorti de l'écran =libérez la mémoire et supprimez-le du vecteur
                                delete *it;
                                it = missiles.erase(it);
                                std::cout << "supprimé" << std::endl;
                        }
                        else if ((*it)->Collide(it, a))
                        {
                                delete *it;
                                it = missiles.erase(it);
                                std::cout << "supprimé" << std::endl;
                                delete &a;
                        }
                        else
                        {
                                // Le missile est toujours à l'écran
                                f.DrawMissile(static_cast<int>((*it)->GetX()), static_cast<int>((*it)->GetY()), static_cast<int>((*it)->GetSize()));
                                ++it;
                        }
                }

                f.Update();
        }

        // Libérez la mémoire des missiles restants
        for (Missile *missile : missiles)
        {
                delete missile;
        }

        return 0;
}