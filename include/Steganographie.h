#ifndef STEGANOGRAPHIE_H
#define STEGANOGRAPHIE_H

#include "RGBUtility.h"
#include "LSB.h"

class Steganographie
{
    public:
        Steganographie();
        virtual ~Steganographie();
        int apply(char* fA,char* fB,char* fC);

    protected:

    private:
};

#endif // STEGANOGRAPHIE_H
