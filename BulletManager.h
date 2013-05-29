#ifndef BULLETMANAGER_H
#define BULLETMANAGER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Bullet.h"

class BulletManager
{
    public:
        BulletManager();
        void init( SDL_Rect POs );
        void draw( SDL_Surface *Screen );
        void Fire();
        void Update();

    private:
        Bullet Bullets[10];
        int BulletsOnScreen;

};

#endif
