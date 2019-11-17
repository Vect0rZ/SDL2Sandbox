#include "color.h"

color color_new(char r, char g, char b)
{
    color c = { r, g, b };

    return c;
}