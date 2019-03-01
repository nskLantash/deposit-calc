#include <stdio.h>
#include <stdlib.h>

int main()
{
	int amount, term, f;
	
	printf("Enter the amount of money to deposit (10000 or more): ");
	scanf("%d", &amount);
	printf("Enter deposit life (from 1 to 365 days): ");
	scanf("%d", &term);
	
	return 0;
}
