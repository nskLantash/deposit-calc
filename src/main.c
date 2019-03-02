#include <stdio.h>
#include <stdlib.h>
#include "deposit.h"

int main()
{
	int amount, term, f;
	
	printf("Enter the amount of money to deposit (10000 or more): ");
	scanf("%d", &amount);
	printf("Enter deposit life (from 1 to 365 days): ");
	scanf("%d", &term);
	
	f = data_check(amount, term);
	
	return 0;
}


