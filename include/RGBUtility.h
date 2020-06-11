#ifndef RGBUTILITY_H
#define RGBUTILITY_H

#include <SDL/SDL.h>

class RGBUtility
{
    public:
        RGBUtility();
        virtual ~RGBUtility();
        SDL_Color getRGB(SDL_Surface *surface, int x, int y);
        void putPixel(SDL_Surface *surface, int x, int y, Uint32 pixel);

    protected:

    private:
};

#endif // RGBUTILITY_H
