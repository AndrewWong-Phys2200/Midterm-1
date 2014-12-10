Midterm-1 Project
=========
The goal of this project is to implement two different algorithms to compute the value of pi and compare their performance.

The first algorithm used is the Leibniz series. main1.c calls the function pi_leibniz to calculate pi. It was found that
an n1 value of 1,000,000 is needed to produce an absolute error of less than 10^-6.

The second algorithm is the Bailey-Borwein-Plouffe series. main2.c calls the function pi_bbp to calculate pi. The value 
n2 = 5 is needed to produce an absolute error of less than 10^-6.

Calling pi_leibniz with n=1000000 takes .0067 seconds, or 67 milliseconds. 
Calling pi_bbp with n=5 takes .000021 seconds, or .0021 milliseconds. pi_bbp is significantly faster than calling the leibniz series. 
