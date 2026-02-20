#include <SDL3/SDL.h>
#include <iostream>
#include "Engine.hpp"
int main(int argc, char** argv)
{
    Engine engine("Name",900,900);
    if (!engine.Init()) return 1;
    engine.Run();
    return 0;
}
