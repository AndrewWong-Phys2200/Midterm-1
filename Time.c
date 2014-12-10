/* Reuse Code from HW4 Fibonacci
 * Calculates time per function call
 */
 
#include <stdio.h>
#include <time.h>
#include "pi_funs.h"

int n = 1000000;
double pi_leibniz(int);

int main(void)
{
    int i;
    long l;
    clock_t begin, end;
    double t1, t2;
    int n1 = 1000, n2 = 1000000;

    begin = clock();
    for (i = 0; i < n1; i++)
    {
        l = pi_leibniz(1000000);            /* n=1,000,000 for leibniz series to have acceptable error
        //printf("%4d %20ld\n", i, l);
    }
    end = clock();

    t1 = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f sec\n", t1);

    begin = clock();
    for (i = 0; i < n2; i++)
    {
        l = pi_bbp(5);                      /* n=5 for bbp to have acceptable error */
        //printf("%4d %20ld\n", i, l);
    }
    end = clock();

    t2 = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f sec\n", t2);

    return 0;
}
