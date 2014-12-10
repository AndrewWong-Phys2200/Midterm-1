/*
 * Uses pi_leibniz function to calculate pi
 */
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int main(void)
{
    double pi;
    
    for(int n = 100000; n <= 2000000; n += 100000)                  /*start at n=100000 and increment by 100000*/
    {
        pi = pi_leibniz (n);
        printf("%8d   %20.15f   %20.15f\n", n, pi, fabs(pi - M_PI));
    }    

    return 0;
}

