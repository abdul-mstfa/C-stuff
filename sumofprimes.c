//check if number is prime

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{

int num = 1;
int divisor = 1;
int elements=0;
int *primes = malloc (sizeof (int) * elements); /* elements is the length of the array */
//int primes[elements];
int i=0;
// need to check until we hit a mod == 0. if no 0 is encountered, number is prime

for (num = 1; num <= 100; num++)
{
    for ( divisor = 2; divisor < num; divisor++)
    {
        int mod = num % divisor;
        if (divisor != num && divisor !=1 && mod == 0)
        {
        //printf ("The Number %d has a modulus of %d when divided by %d, it is not prime \n \n", num, mod, divisor);
        break;
        }
        else if  (divisor != num && divisor !=1 && mod!=0)
        {
        //printf ("The Numbe %d has a modulus of %d when divided by %d, it is a prime \n \n", num, mod, divisor);      
        
        if (divisor == num-1)
        {
        primes[elements]=num;
        elements++;
        break;
        }
        }

    }       
}
/*for ( int loop = 0; loop <25 ; loop++)
{
   printf ("%d \n \n", primes[loop]);
}*/


int sum = 0;

for ( i = 0; i < elements; i++)
{
    sum += primes[elements];
}

sum+2;

printf ("%d", sum);

}