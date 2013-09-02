
#include "Library.h"

App::App()
{
    //Set everything to default values
    window = nullptr;
    renderer = nullptr;
    isRunning = true;

    gridTexture = nullptr;
    xTexture = nullptr;
    oTexture = nullptr;

    ResetGrid();
    currentPlayer = 0;
}

App::~App()
{

}

int App::Execute()
{
    if (!Initialise())
        return -1;

    //Game Loop
    SDL_Event event;
    while(isRunning)
    {
        while(SDL_PollEvent(&event))
            OnEvent(&event);

        Update();
        Render();
    }

    Exit();
    return 0;
}

void App::ResetGrid()
{
    for (int i = 0; i < 9; i++)
        grid[i] = GRID_NONE;
    currentPlayer = 0;
}

void App::SetGridCell(const int &cell, const int &type)
{
    grid[cell] = type;
}
