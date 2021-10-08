#include <iostream>
#include <algorithm>
#include <SDL.h>
#include <vector>

#define SCREEN_WIDTH    800
#define SCREEN_HEIGHT   600

using namespace std;

int main(int argc, char* argv[]) {

    (void)argc;
    (void)argv;


    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("PokeBlue", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 400, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);

    SDL_Delay(3000);

    return 0;
}
