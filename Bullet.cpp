#include "Bullet.h"

Bullet::Bullet()
{
    Pos.w = 32;
    Pos.h = 32;
    IsFiring = false;
    IsVisible = false;
}

void Bullet::init( const char* filename, SDL_Rect POs )
{
    Img = IMG_Load( filename );
    Pos.x = POs.x;
    Pos.y = POs.y;
}

void Bullet::draw( SDL_Surface *Screen )
{
    SDL_BlitSurface( Img, NULL, Screen, &Pos );
}

void Bullet::Fire()
{
    IsFiring = true;
    IsVisible = true;
}

void Bullet::Update()
{
    if ( IsFiring == true && IsVisible == true )
    {
        Pos.y -= 1;
    }
}

void Bullet::updatePos( SDL_Rect POs )
{
    Pos.x = POs.x;
    Pos.y = POs.y;
}

Bullet::~Bullet()
{
    SDL_FreeSurface( Img );
}
