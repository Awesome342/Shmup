#ifndef PLAYER_H
#define PLAYER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Bullet.h"

class Player
{
    public:
        Player();
        ~Player();
        void Draw( SDL_Surface *Screen );
        void getInput();

    private:
        Uint8 *key;
        SDL_Rect Pos;
        SDL_Rect Clip;
        SDL_Surface *Img;
        Bullet bullet;
};

#endif
