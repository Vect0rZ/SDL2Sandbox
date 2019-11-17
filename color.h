#ifndef COLOR_H
#define COLOR_H

typedef struct Color
{
    char r;
    char g;
    char b;
} color;

color color_new(char r, char g, char b);

#endif