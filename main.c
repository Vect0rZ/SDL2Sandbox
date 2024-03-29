#include <stdio.h>
#include <SDL2/SDL.h>
#include "window.h"
#include "color.h"

int main()
{
    win* window = window_initialize("First window", 800, 600);
    
    color background_color = color_new(0xaf, 0xfa, 0x2a);
    //Fill the surface
    window_fill(window, background_color);

    // A basic main loop to prevent blocking
    int is_running = 1;
    SDL_Event event;
    while (is_running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                is_running = 0;

                window_close(window);
            }
        }
        SDL_Delay(16);
        //Update the surface
        SDL_UpdateWindowSurface(window->window);
    }

    return 0;
}