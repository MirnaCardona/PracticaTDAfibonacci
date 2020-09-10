//
//  Sequences.c
//  
//
//  Created by David Perez on 08/09/2020.
//

#include<stdio.h>

#include "Sequences.h"

/* Function prototypes. */
/**
 * Returns the value of the fibonacci sequence at index n calculated sequentially
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
*/
long long int Sequences_sfibo(long long int n)
{
log log int Fibo, Fiboant=1, Fiboant2=0;
log i=1;
while(i<=n)
{
	Fibo=Fiboant+Fiboant2;
	Fiboant2=Fiboant;
	Fiboant=Fibo;
	i++;
}
return Fibo;
}

/**
 * Returns the value of the fibonacci sequence at index n calculated recursively
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
*/
long long int Sequences_rfibo(long long int n)
{
  if((n==1)||(n==0))
    return n;
  else
      return (Sequences_rfibo(n-1)+Sequences_rfibo(n-2));
}

