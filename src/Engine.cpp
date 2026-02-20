#include "Engine.hpp"
#include <SDL3/SDL.h>
#include <iostream>
// Engine constructor
Engine::Engine(const char* name, int width, int height)
{
    window = SDL_CreateWindow(
        name,
        width,
        height,
        SDL_WINDOW_OPENGL
    );

    renderer = SDL_CreateRenderer(
        window,
        nullptr
    );
}

// Engine destructor
Engine::~Engine()
{
    if (renderer) SDL_DestroyRenderer(renderer);
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
}

bool Engine::Init()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return false;
    }
    return true;
}

void Engine::Run()
{
    while (running) {
        HandleEvents();
        Update();
        Render();
    }
}

void Engine::HandleEvents(){
    std::cout << "handling event";
}
void Engine::Update(){
    std::cout << "updating";
}
void Engine::Render(){
    std::cout << "rendering";
}