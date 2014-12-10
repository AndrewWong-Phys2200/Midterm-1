/*
 *  Function to calculate pi with Bailey Borwein Plouffe Series
 *
 */

double pi_bbp (int n)
{
    int i8;
    double pi2 = 0.;
    int i = 0;
    double a = 1., b, c, d, e;
    while (i < n)                               /*while loop calculates the series for n=1...9 */
    {
        i8 = i*8;
        b = 4./(i8 + 1.);
        c = 2./(i8 + 4.);
        d = 1./(i8 + 5.);
        e = 1./(i8 + 6.);
        pi2 += a*( b - c - d - e );
        a /= 16.;        
        i++;
     }
     return(pi2);
}
