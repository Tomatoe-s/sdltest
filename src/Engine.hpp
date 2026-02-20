#pragma once
#include <SDL3/SDL.h>

class Engine {
public:
    Engine(const char* name, int width, int height);
    ~Engine();

    bool Init();
    void Run();

private:
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    bool running = true;

    void HandleEvents();
    void Update();
    void Render();
};
