#include "Bullet.h"

Bullet::Bullet()
{
    Img[0] = IMG_Load("data/enemy_3.png");
    Img[1] = IMG_Load("data/enemy_3.png");
    Img[2] = IMG_Load("data/enemy_3.png");
    Img[3] = IMG_Load("data/enemy_3.png");
    Img[4] = IMG_Load("data/enemy_3.png");
    Img[5] = IMG_Load("data/enemy_3.png");
    Img[6] = IMG_Load("data/enemy_3.png");
    Img[7] = IMG_Load("data/enemy_3.png");
    Img[8] = IMG_Load("data/enemy_3.png");
    Img[9] = IMG_Load("data/enemy_3.png");
    Pos[0].w = 32;
    Pos[1].w = 32;
    Pos[2].w = 32;
    Pos[3].w = 32;
    Pos[4].w = 32;
    Pos[5].w = 32;
    Pos[6].w = 32;
    Pos[7].w = 32;
    Pos[8].w = 32;
    Pos[9].w = 32;
    Pos[0].h = 32;
    Pos[1].h = 32;
    Pos[2].h = 32;
    Pos[3].h = 32;
    Pos[4].h = 32;
    Pos[5].h = 32;
    Pos[6].h = 32;
    Pos[7].h = 32;
    Pos[8].h = 32;
    Pos[9].h = 32;
    BulletsOnScreen = 0;
    IsFiring = false;
}

void Bullet::init( SDL_Rect Pos )
{
    Pos.x = Pos.x;
    Pos.y = Pos.y;
}

void Bullet::Fire()
{
    IsFiring = true;
    BulletsOnScreen++;
}

void Bullet::Update()
{
    if ( IsFiring == true && BulletsOnScreen <= 10 )
    {
        Pos[BulletsOnScreen -= 1].y -= 1;
    }
}

Bullet::~Bullet()
{
    SDL_FreeSurface( Img[0] );
    SDL_FreeSurface( Img[1] );
    SDL_FreeSurface( Img[2] );
    SDL_FreeSurface( Img[3] );
    SDL_FreeSurface( Img[4] );
    SDL_FreeSurface( Img[5] );
    SDL_FreeSurface( Img[6] );
    SDL_FreeSurface( Img[7] );
    SDL_FreeSurface( Img[8] );
    SDL_FreeSurface( Img[9] );
}
