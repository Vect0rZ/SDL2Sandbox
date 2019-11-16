#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "window.h"

win* window_initialize(char* name, int width, int height)
{
    win* result = NULL;
    
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Could not initialize video, error: %s\n", SDL_GetError());
        return NULL;
    }

    SDL_Window* window = SDL_CreateWindow(name,
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Could not create window, error: %s\n", SDL_GetError());
        return NULL;
    }

    SDL_Surface* surface = SDL_GetWindowSurface(window);
    
    result = malloc(sizeof(win));
    result->window = window;
    result->surface = surface;

    return result;
}

void window_fill(win* window)
{
    
}

void window_close(win* window)
{
    printf("Freeing window surface..\n");
    SDL_FreeSurface(window->surface);

    printf("Freeing window malloc..\n");
    free(window);

    printf("Quitting SDL..\n");
    SDL_Quit();
}