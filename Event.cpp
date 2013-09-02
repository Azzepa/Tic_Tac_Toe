
#include "Library.h"

Event::Event()
{

}

Event::~Event()
{
    //Virtual
}

void Event::OnEvent(SDL_Event* event)
{
    switch (event->type)
    {
    case SDL_KEYDOWN:
        {
            KeyDown(event->key.keysym.sym);
            break;
        }
    case SDL_KEYUP:
        {
            KeyUp(event->key.keysym.sym);
            break;
        }
    case SDL_MOUSEMOTION:
        {
            MouseMove(event->motion.x, event->motion.y, event->motion.xrel, event->motion.yrel,
                      event->motion.state&SDL_BUTTON(SDL_BUTTON_LEFT), event->motion.state&SDL_BUTTON(SDL_BUTTON_RIGHT));
            break;
        }
    case SDL_MOUSEBUTTONDOWN:
        {
            switch (event->button.button)
            {
            case SDL_BUTTON_LEFT:
                {
                    LeftButtonDown(event->button.x, event->button.y);
                    break;
                }
            case SDL_BUTTON_RIGHT:
                {
                    RightButtonDown(event->button.x, event->button.y);
                    break;
                }
            }
            break;
        }
    case SDL_MOUSEBUTTONUP:
        {
            switch (event->button.button)
            {
            case SDL_BUTTON_LEFT:
                {
                    LeftButtonUp(event->button.x, event->button.y);
                    break;
                }
            case SDL_BUTTON_RIGHT:
                {
                    RightButtonUp(event->button.x, event->button.y);
                    break;
                }
            }
            break;
        }
    case SDL_QUIT:
        {
            Exit();
            break;
        }
    }
}

void Event::KeyDown(SDL_Keycode key)
{
    //Virtual
}

void Event::KeyUp(SDL_Keycode key)
{
    //Virtual
}

void Event::MouseMove(const int &mouseX, const int &mouseY, const int &relX, const int &relY,
               const bool &left , const bool &right)
{
    //Virtual
}

void Event::LeftButtonDown(const int &mouseX, const int &mouseY)
{
    //Virtual
}

void Event::LeftButtonUp(const int &mouseX, const int &mouseY)
{
    //Virtual
}

void Event::RightButtonDown(const int &mouseX, const int &mouseY)
{
    //Virtual
}

void Event::RightButtonUp(const int &mouseX, const int &mouseY)
{
    //Virtual
}

void Event::Exit()
{
    //Virtual
}
