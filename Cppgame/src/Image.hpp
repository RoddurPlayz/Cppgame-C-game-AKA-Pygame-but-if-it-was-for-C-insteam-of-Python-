#pragma once

#include <iostream>
#include <array>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Math.hpp"
#include "Rect.hpp"


struct IMAGE
{
    SDL_Surface* image_surface;
    SDL_Texture* image_texture;
    SDL_Window* display;
    SDL_Renderer* renderer;

    VECTOR2 get_size();
    RECT get_rect(const std::array<float, 2>& topleft);
};
