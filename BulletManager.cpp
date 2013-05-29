#include "BulletManager.h"

BulletManager::BulletManager()
{
    BulletsOnScreen = 0;
}

void BulletManager::init( SDL_Rect POs )
{
    Bullets[0].init( "data/enemy_3.png", POs );
    Bullets[1].init( "data/enemy_3.png", POs );
    Bullets[2].init( "data/enemy_3.png", POs );
    Bullets[3].init( "data/enemy_3.png", POs );
    Bullets[4].init( "data/enemy_3.png", POs );
    Bullets[5].init( "data/enemy_3.png", POs );
    Bullets[6].init( "data/enemy_3.png", POs );
    Bullets[7].init( "data/enemy_3.png", POs );
    Bullets[8].init( "data/enemy_3.png", POs );
    Bullets[9].init( "data/enemy_3.png", POs );
}

void BulletManager::draw( SDL_Surface *Screen )
{
    Bullets[0].draw( Screen );
    Bullets[1].draw( Screen );
    Bullets[2].draw( Screen );
    Bullets[3].draw( Screen );
    Bullets[4].draw( Screen );
    Bullets[5].draw( Screen );
    Bullets[6].draw( Screen );
    Bullets[7].draw( Screen );
    Bullets[8].draw( Screen );
    Bullets[9].draw( Screen );
}

void BulletManager::Fire()
{
    if ( BulletsOnScreen == 0 )
    {
        Bullets[0].Fire();
        BulletsOnScreen += 1;
    }
    if ( BulletsOnScreen == 1 )
    {
        Bullets[1].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 2 )
    {
        Bullets[2].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 3 )
    {
        Bullets[3].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 4 )
    {
        Bullets[4].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 5 )
    {
        Bullets[5].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 6 )
    {
        Bullets[6].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 7 )
    {
        Bullets[7].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 8 )
    {
        Bullets[8].Fire();
        BulletsOnScreen++;
    }
    if ( BulletsOnScreen == 9 )
    {
        Bullets[9].Fire();
        BulletsOnScreen++;
    }
}

void BulletManager::Update()
{
    Bullets[0].Update();
    Bullets[1].Update();
    Bullets[2].Update();
    Bullets[3].Update();
    Bullets[4].Update();
    Bullets[5].Update();
    Bullets[6].Update();
    Bullets[7].Update();
    Bullets[8].Update();
    Bullets[9].Update();
}
