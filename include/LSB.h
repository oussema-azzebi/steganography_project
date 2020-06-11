#ifndef LSB_H
#define LSB_H

#include <math.h>

class LSB
{
    public:
        LSB();
        virtual ~LSB();
        int lsbval(int val1, int val2);

    protected:
        int decimal_to_binary(int n);
        int binary_to_decimal(int n);
    private:
};

#endif // LSB_H
