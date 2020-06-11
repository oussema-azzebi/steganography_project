#include "LSB.h"

LSB::LSB()
{
    //ctor
}

LSB::~LSB()
{
    //dtor
}

int LSB::decimal_to_binary(int n)  /* Function to convert decimal to binary.*/
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int LSB::binary_to_decimal(int n) /* Function to convert binary to decimal.*/

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
int LSB::lsbval(int val1, int val2)
{
    int b1,b2;
    b1 = decimal_to_binary(val1)/100000;
    b2 = decimal_to_binary(val2);
    int rest_b2 = b2 % 1000 ;
    b2 -= rest_b2;
    b2 += b1;
    return binary_to_decimal(b2);

}
