#include <stdio.h>

int main()
{
    int a, b;
    float c, d;

    a = 13;
    b = 5;
    // to use typecast you define the data (data type) then enter variable to change its type
    // you could use this do get a more precice value
    c = a / b;               // divide using integers
    d = (float)a / (float)b; // divide integers typecast as floats
    // instead of giving 2.6 it would give 2 because of trunctuation so that why we used a float typecast
    
    printf("[integers]\t a = %d\t b = %d\n", a, b);
    printf("[floats]\t c = %f\t d = %f\n", c, d);
}
