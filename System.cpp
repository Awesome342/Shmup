#include "System.h"

System::System()
{
    quit = false;
    SDL_EnableKeyRepeat(1, 1);
}

void System::Run()
{
    while ( quit == false )
    {
        //init stuff
        while ( SDL_PollEvent( &event ) )
        {
            if ( event.type == SDL_QUIT )
            {
                quit = true;
            }
        }

        Sprite.Draw();
    }
}
