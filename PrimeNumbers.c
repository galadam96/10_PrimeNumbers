/*Date: 2023.07.30
Purpose: List prime numbers up to 100 */

#include <stdio.h>
#include <stdbool.h>

int main() {

	int counter;
	int i;
	
 	int primes[50] = { 0 }; // set every value to 0 in array
	int primeIndex = 2;

	bool isPrime;
	//hardcode first 2 prime numbers

	primes[0] = 2;
	primes[1] = 3;
	
	for (counter = 5; counter <= 100; counter = counter + 2) {

		isPrime = true;

		for (i = 1; isPrime && counter / primes[i] >= primes[i]; ++i) {

			if (counter % primes[i] == 0)
				isPrime = false;		
		}

		if (isPrime == true) {
			primes[primeIndex] = counter;
			++primeIndex;
		}	
	

	}


	for (i = 0; i < primeIndex; i++) {
		printf("\nPrime number: %i ", primes[i]);
	}

	return 0;
}