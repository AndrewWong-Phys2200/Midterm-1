/*
 * Uses pi_bbp function to calculate pi
 */
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "pi_funs.h"

int main(void)
{
    double pi;
    
    for(int n = 1; n <= 10; n += 1)       
    {
        pi = pi_bbp (n);
        printf("%8d   %20.15f   %20.15f\n", n, pi, fabs(pi - M_PI));
    }    

    return 0;
}

