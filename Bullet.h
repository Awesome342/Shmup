#ifndef BULLET_H
#define BULLET_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Bullet
{
    public:
        Bullet();
        void init( const char* filename, SDL_Rect POs );
        void draw( SDL_Surface *Screen );
        void Fire();
        void Update();
        void updatePos( SDL_Rect POs );
        ~Bullet();

    private:
        SDL_Surface *Img;
        SDL_Rect Pos;
        bool IsFiring;
        bool IsVisible;
};

#endif
