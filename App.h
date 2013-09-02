
#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED

enum
{
    GRID_NONE = 0,
    GRID_X,
    GRID_O
};

class App: public Event
{
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    SDL_Texture* gridTexture;
    SDL_Texture* xTexture;
    SDL_Texture* oTexture;

    int grid[9];
    int currentPlayer;
public:
    App();
    ~App();

    int Execute();

    bool Initialise();
    void OnEvent(SDL_Event* event);
    void Update();
    void Render();
    void Quit();

    //Event functions
    void LeftButtonDown(const int &mouseX, const int &mouseY);
    void RightButtonDown(const int &mouseX, const int &mouseY);
    void Exit();

    //Game related functions
    void ResetGrid();
    void SetGridCell(const int &cell, const int &type);
};

#endif // APP_H_INCLUDED
