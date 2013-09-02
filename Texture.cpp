
#include "Library.h"

SDL_Texture* Texture::Load(SDL_Renderer* renderer, const std::string &filePath)
{
    //Load the image to txture, and return
    return IMG_LoadTexture(renderer, filePath.c_str());
}

void Texture::Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y)
{
    //Rect for coords of where image is going
    SDL_Rect destinationRect;
    destinationRect.x = x;
    destinationRect.y = y;
    SDL_QueryTexture(source, nullptr, nullptr, &destinationRect.w, &destinationRect.h);

    //Blit image
    SDL_RenderCopy(renderer, source, nullptr, &destinationRect);
}

void Texture::Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y,
                     const int &x2, const int &y2, const int &w, const int &h)
{
    //Rect or coords of where image is going
    SDL_Rect destinationRect;
    destinationRect.x = x;
    destinationRect.y = y;
    destinationRect.w = w;
    destinationRect.h = h;

    //Rect for what part of the image is being drawn
    SDL_Rect sourceRect;
    sourceRect.x = x2;
    sourceRect.y = y2;
    sourceRect.w = w;
    sourceRect.h = h;

    //Blit Image
    SDL_RenderCopy(renderer, source, &sourceRect, &destinationRect);
}

void Texture::MakeTransparent(SDL_Texture* source, const int &r, const int &g, const int &b)
{
    //Make specified RGB colour transparent on image
    SDL_SetTextureColorMod(source, r, g, b);
}
