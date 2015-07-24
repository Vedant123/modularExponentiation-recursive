/**********************************************************
*  modularExponentiation.c                                *
*  modularExponentiation-recursive                        *
*                                                         *
*  Created by Vedant Mathur on 7/24/15.                   *
*  Copyright (c) 2015 Vedant Mathur. All rights reserved. *
**********************************************************/

//include statements
#include <stdio.h>
#include <string.h>
#include <math.h>

//preprocessor declarations
typedef long long ll;
//function prototypes
ll modularExponentiation(ll base, ll exponent, ll modulus);

//main function
int main(int argc, char* argv[])
{
    //primary variable set
	ll base, exponent, modulus;
    //user interaction
	printf("Enter the desired base: \n");
	scanf("%lld", &base);
	printf("Enter the desired exponent: \n");
	scanf("%lld", &exponent);
	printf("Enter the desired modulus: \n");
	scanf("%lld", &modulus);
	printf("\n%lld\n", modularExponentiation(base, exponent, modulus));
}

//recursive function to compute the given modular exponentiation
ll modularExponentiation(ll base, ll exponent, ll modulus)
{
    //base case
	if(exponent == 0)
	{
        //any number raised to the power of 0 is 1
		return 1;	
	}
	else if(base % 2 == 1)
	{
        //splits the exponent into two and applies the initial multiplicative law of modular arithmetic
		return (ll)(pow(modularExponentiation(base, exponent / 2, modulus), 2)) % modulus;
	}
    	else
    	{
            //uses the law a^b = a^(b - 1) * a to split the case up until the base case is achieved
        	return ((base % modulus) * modularExponentiation(base, exponent - 1, modulus)) % modulus;
    	}
}
