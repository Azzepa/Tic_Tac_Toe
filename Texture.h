
#ifndef SURFACE_H_INCLUDED
#define SURFACE_H_INCLUDED

class Texture
{
private:
public:
    Texture();
    ~Texture();

    static SDL_Texture* Load(SDL_Renderer* renderer, const std::string &filePath);
    static void Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y);
    static void Draw(SDL_Renderer* renderer, SDL_Texture* source, const int &x, const int &y,
                     const int &x2, const int &y2, const int &w, const int &h);
    static void MakeTransparent(SDL_Texture* source, const int &r, const int &g, const int &b);
};

#endif // SURFACE_H_INCLUDED
