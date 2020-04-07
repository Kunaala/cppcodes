#include<iostream>
#include <SDL2/SDL.h> 
#include <SDL2/SDL_image.h> 
#include <SDL2/SDL_timer.h> 
int main()
{
    if(SDL_Init(SDL_INIT_VIDEO)<0)
    {
        std::cout<<"SDL unit failed"<<std::endl;
        return 1;
    }
    std::cout<<"SDL unit succeeded"<<std::endl;
    SDL_Quit();
}