#include "prime.h"
#include<stdio.h>

int IsPrime(int n) {
	int i, k = 0, fct = 0;
	for(i=1; i<=n; i++) {
		if(n%i==0) fct++;
	}

	if(fct==2) k = 1;
	return k;
}
