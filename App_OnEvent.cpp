
#include "Library.h"

void App::OnEvent(SDL_Event* event)
{
    Event::OnEvent(event);
}

void App::LeftButtonDown(const int &mouseX, const int &mouseY)
{
    int gridID = (mouseX / 200) + ((mouseY / 200) * 3);

    if (grid[gridID] != GRID_NONE)
        return;

    if (currentPlayer == 0)
    {
        SetGridCell(gridID, GRID_X);
        currentPlayer = 1;
    }
    else
    {
        SetGridCell(gridID, GRID_O);
        currentPlayer = 0;
    }
}

void App::RightButtonDown(const int &mouseX, const int &mouseY)
{
    ResetGrid();
}

void App::Exit()
{
    isRunning = false;
}
