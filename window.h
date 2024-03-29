#ifndef WINDOW_H
#define WINDOW_H

#include <stdio.h>
#include <SDL2/SDL.h>
#include "color.h"

typedef struct Window
{
    SDL_Window* window;
    SDL_Surface* surface;
} win;

win* window_initialize(char* name, int width, int height);
void window_fill(win* window, color c);
void window_close(win* window);


#endif