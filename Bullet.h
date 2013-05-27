#ifndef BULLET_H
#define BULLET_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Bullet
{
    public:
        Bullet();
        ~Bullet();
        void init( SDL_Rect Pos );
        void Fire();
        void Update();

    private:
        SDL_Surface *Img[10];
        SDL_Rect Pos[10];
        int BulletsOnScreen;
        bool IsFiring;
};

#endif
