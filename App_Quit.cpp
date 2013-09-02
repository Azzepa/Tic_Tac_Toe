
#include "Library.h"

void App::Quit()
{
    SDL_DestroyTexture(gridTexture);
    SDL_DestroyTexture(xTexture);
    SDL_DestroyTexture(oTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
