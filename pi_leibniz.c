/*
 * Function to calculate pi with Leibniz series.
 *
 */

double pi_leibniz (int n)
{

    double pi = 0.;
                     
    for(int i = 0; i <= n; ++i)
    {        
        int j = 2*i + 1;                          /*denominator term*/
        double o = 1.0 / j; 
        o = (i%2 == 0)? o : -o;                   /*odd terms are subtracted, even terms are added*/
        pi += o ;
    }
    pi = 4*pi;

    return pi;
}

