
#include "Library.h"

void App::Render()
{
    //Set Rendering colour to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    //Clear Renderer
    SDL_RenderClear(renderer);

    //Place graphics on screen
    Texture::Draw(renderer, gridTexture, 0, 0);
    for (int i = 0; i < 9; i++)
    {
        if (grid[i] == GRID_X)
            Texture::Draw(renderer, xTexture, (i % 3) * 200, (i / 3) * 200);
        else if (grid[i] == GRID_O)
            Texture::Draw(renderer, oTexture, (i % 3) * 200, (i / 3) * 200);
    }

    //Put everything on screen
    SDL_RenderPresent(renderer);
}
