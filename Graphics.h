#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Player.h"

class Graphics
{
    public:
        Graphics();
        ~Graphics();
        void Draw();

    private:
        SDL_Surface *Screen;
        Player Knight;
};

#endif
