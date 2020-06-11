#include "Steganographie.h"

int Steganographie::apply(char* fA,char* fB,char* fC)
{
    SDL_Surface* bmpA = SDL_LoadBMP(fA);
    SDL_Surface* bmpB = SDL_LoadBMP(fB);
    int width_A,height_A;
    int x,y;

    LSB lsb;RGBUtility utility;
    // load image A
    if (!bmpA)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    // load image B
    if (!bmpB)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    width_A = bmpA->w ;
    height_A = bmpA->h ;
    printf("width A : %d\n",width_A);
    printf("height A : %d\n",height_A);
    for(x=0;x<width_A;x++)
    {
        for(y=0;y<height_A;y++)
        {
            SDL_Color vA;
            SDL_Color vB;

            vA = utility.getRGB(bmpA, x, y);
            vB = utility.getRGB(bmpB, x, y);
            vB.r = lsb.lsbval(vA.r,vB.r);
            vB.g = lsb.lsbval(vA.g,vB.g);
            vB.b = lsb.lsbval(vA.b,vB.b);
            Uint32 pixel = SDL_MapRGB(bmpB->format,vB.r,vB.g,vB.b);
            utility.putPixel(bmpB, x, y, pixel);
        }
    }
    SDL_SaveBMP(bmpB,fC);
    return 0;
}

Steganographie::Steganographie()
{
    //ctor
}

Steganographie::~Steganographie()
{
    //dtor
}
