
#ifndef EVENT_H_INCLUDED
#define EVENT_H_INCLUDED

class Event
{
private:
public:
    Event();
    virtual ~Event();

    virtual void OnEvent(SDL_Event* event);
    virtual void KeyDown(SDL_Keycode key);
    virtual void KeyUp(SDL_Keycode key);
    virtual void MouseMove(const int &mouseX, const int &mouseY, const int &relX, const int &relY,
                           const bool &left , const bool &right);
    virtual void LeftButtonDown(const int &mouseX, const int &mouseY);
    virtual void LeftButtonUp(const int &mouseX, const int &mouseY);
    virtual void RightButtonDown(const int &mouseX, const int &mouseY);
    virtual void RightButtonUp(const int &mouseX, const int &mouseY);
    virtual void Exit();
};

#endif // EVENT_H_INCLUDED
