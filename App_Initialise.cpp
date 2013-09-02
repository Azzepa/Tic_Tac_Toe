
#include "Library.h"

bool App::Initialise()
{
    //Initialise SDL2
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return false;

    //Create a window
    window = SDL_CreateWindow("Tic Tac Toe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600, 0);
    if (window == nullptr)
        return false;

    //Create a rendering context
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == nullptr)
        return false;

    //Load a test image to display
    gridTexture = Texture::Load(renderer, "Img/Grid.png");
    xTexture = Texture::Load(renderer, "Img/X.png");
    oTexture = Texture::Load(renderer, "Img/O.png");
    if (gridTexture == nullptr || xTexture == nullptr || oTexture == nullptr)
        return false;

    //Texture::MakeTransparent(xTexture, 255, 0, 255);
    //Texture::MakeTransparent(oTexture, 255, 0, 255);

    return true;
}
